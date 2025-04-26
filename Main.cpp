#include "MainLoop.h"
#include "TestCases.h"
#include "SDL_Handler.h"
#include "Game.h"
#include <iostream>

int main(int argc, char* argv[])
{
    bool runTests = false;  // change this to true when you want run test ;)

    if (runTests)
    {
        SDL_Handler handler;

        if (!handler.init()) {
            std::cerr << "SDL Initialization failed.\n";
            return -1;
        }

        Game game(&handler);

        TestCases::run(game);
    }
    else
    {
        MainLoop::run();// just run the game
    }

    return 0;
}
