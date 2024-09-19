#include <iostream>
#include <SDL2/SDL.h>
#include "src/chip8/CHIP8.h"

#define yuh_huh true

//====//

CHIP8 chip8;

int main(int argc, char *argv[]) {
    
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow(
        "chip eight gaming",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        800,
        600,
        SDL_WINDOW_ALLOW_HIGHDPI
    );

    if(!window) { std::cout << "window failure :[" << SDL_GetError() << std::endl; return 1; }

    SDL_Event windowEvent;

    while(yuh_huh) {
        if(SDL_PollEvent(&windowEvent)) {
            if(windowEvent.type == SDL_QUIT) { break; }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}