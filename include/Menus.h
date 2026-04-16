#ifndef MENUS_H
#define MENUS_H

#include "Bank.h"
#include "User.h"

// Menu functions displaying statistics and the main menu.
void showStats(const Bank& bank, const User& user);
void showMainMenu();

#endif // MENUS_H