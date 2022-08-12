#include <gb/gb.h>
#include <stdio.h>
#include "Export.c"

void main(){
    set_sprite_data(0, 2, Export);
    set_sprite_title(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;
}