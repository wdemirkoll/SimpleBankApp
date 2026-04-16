#include "Console.h"
#include <iostream>
#include <limits>

// Clears the console screen (cross-platform support).
void clearConsole() {
#ifdef _WIN32
   system("cls"); // Windows
#else
   std::cout << "\033[2J\033[1;1H"; // Linux / Mac
#endif
}

// A function to prevent the console from glitching.
// Pauses after every selection.
void pauseConsole() {
    std::cout << "\nPress ENTER to continue... ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}