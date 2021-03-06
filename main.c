#include <stdio.h>
#include <SDL2/SDL.h>
#include "constants.h"

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

int initialize_window(void)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        fprintf(stderr, "error initializing SDL.\n");
        return FALSE;
    }

    window = SDL_CreateWindow(
        NULL,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH,
        WINDOW_HEIGHT,
        SDL_WINDOW_BORDERLESS
    );

    if (!window)
    {
        fprintf(stderr, "error sdl windows");
        return 0;
    }

    renderer = SDL_CreateREnderer(window, -1, 0);

    return TRUE;
}


int main() {
    initialize_window();
    return 0;
}