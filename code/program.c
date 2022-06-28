//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.h"
#include <stdio.h>
#include <SDL.h>

//
// Should greet the user into the program
//
// function arguments:
// -> n/a: ???
//
const char *greet(void)
{
    return "Hello, C Developer.";
} // end of func

//
// overview:
//  This is where all Troglobyte apps start there operation.
//
//  We can also give command-line arguments in C. CLI
//  arguments are given after the name of the program in
//  command-line shell of Operating Systems.
//
// function arguments:
// -> argc: stores the number of command-line arguments passed in.
// -> argv: array of character pointers listing all the arguments.
//
int foundation(int argc, char **argv)
{
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Surface *surface;
    SDL_Event event;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s", SDL_GetError());
        return 3;
    } // end if

    if (SDL_CreateWindowAndRenderer(320, 240, SDL_WINDOW_RESIZABLE, &window, &renderer))
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create window and renderer: %s", SDL_GetError());
        return 3;
    } // end if

    while (1)
    {
        SDL_PollEvent(&event);
        if (event.type == SDL_QUIT)
        {
            break;
        } // end if
        SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0x00);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    } // end while

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
    return 0;
} // end of func
