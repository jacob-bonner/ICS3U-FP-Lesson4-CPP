// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: October 2019
// This program can scroll a background on the GameBoy


#include <stdio.h>
#include <gb/gb.h>

#include "background.c"
#include "backgroundtiles.c"

void main() {
    // This function can scroll a background on the GameBoy

    set_bkg_data(0, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, backgroundmap);

    SHOW_BKG;
    DISPLAY_ON;

    while (1) {
        scroll_bkg(1, 0);
        delay(100);
    }
}
