import numpy as np
from PIL import Image
from numpy import asarray
from tkinter import filedialog
import tkinter as tk
import os
from random import random

def im2arr(im):
    # puts image color values and cell number in a np.array [r, g, b] and list [nr]. goes over image in reading order (not snake/ox order)
    rows = im.shape[0]
    cols = im.shape[1]
    nr_cs = np.array([])
    nr_ls = []

    for i in range(rows):
        for j in range(cols):
            nr = i*cols + j
            add = np.array(im[i, j][0:3])
            nr_cs = np.vstack([nr_cs, add]) if nr_cs.size else add
            nr_ls.append(nr)
    return nr_cs, nr_ls


def arr2ls(nr_cs):
    # writes C code which gives every LED its color based on png

    # Find all the unique colors of the image
    unq_cs, counts = np.unique(nr_cs, axis=0, return_counts=True)


    # empty list for cellnrs, color
    cs_ls = []

    # For every unique color find the cell numbers
    for i in range(unq_cs.shape[0]):
        cell_nrs = np.argwhere((nr_cs == unq_cs[i]).all(axis=1))
        cs_ls.append((cell_nrs, unq_cs[i]))

    return cs_ls


def ls2code(cs_ls,name):
    if_code = []
    head = 'void {}()'.format(name)
    br = '{'
    start = 'for(int i = 0; i < NUM_LEDS; i++ ){'
    if_code.append(head)
    if_code.append(br)
    if_code.append(start)
    end = '}'
    if_st = 'if('
    if_nd = ')'
    cont_st = '{'
    cont_nd = '}'
    for i, nrc in enumerate(cs_ls):
        if_cont = ''
        numbers = nrc[0]
        color = nrc[1]
        for k in range(numbers.shape[0]):
            state = '(i == {})'.format(numbers[k][0])
            if_cont = if_cont + state
            if k < numbers.shape[0]-1:
                if_cont = if_cont + ' || '
        set_col = 'leds[i].setRGB({}, {}, {});'.format(color[0], color[1], color[2])
        set_fade = 'leds[i].fadeLightBy(BRIGHTNESS);'
        if i == 0:
            code = if_st + if_cont + if_nd + cont_st + set_col + set_fade + cont_nd
        else:
            code = 'else ' + if_st + if_cont + if_nd + cont_st + set_col + set_fade + cont_nd
        if_code.append(code)

    show = 'FastLED.show();'
    #if_code.append(show)
    if_code.append(end)
    if_code.append(end)

    return if_code


def code2txt(code, name):
    with open('./codes/'+name+'.txt', 'w') as f:
        for line in code:
            f.write(line)
            f.write('\n')
    return


def png2led(png_path='', name=''):
    # select a 'png' file to add a sheet with data to
    # if png_path == '':
    #     root = tk.Tk()
    #     root.withdraw()
    #     png_path = filedialog.askopenfilename(initialdir=os.getcwd(), title="Select file",
    #                                            filetypes=[(".png files", ".png")])

    if png_path == '':
        png_name = input("Enter the name of the png (without png): ")
        png_path = './pngs/'+png_name+'.png'

    if name == '':
        name = input("Enter the filename for code: ")
        path = './codes/'+name+'.txt'
        if os.path.isfile(path):
            name = name + '{}'.format(int(np.round(10000*random())))

    # Load image as np array
    image = Image.open(png_path)
    im = asarray(image)  # shape (8,8,3)

    # for every cell in image matrix list cellnumber and its rgb color r0-255
    nr_cs, nr_ls = im2arr(im)

    # put the cell numbers and their respective colors in a list
    cs_ls = arr2ls(nr_cs)

    # From the list, generate C code
    code = ls2code(cs_ls, name)

    # write code to txt file
    code2txt(code, name)

    return

def main():
    png2led()
    #png2led('./pngs/kleur.png','kleur')
    return

if __name__ == '__main__':
     # execute only if run as a script
     main()

