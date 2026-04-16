#include "Menus.h"
#include "Bank.h"
#include "User.h"
#include <iostream>

void showStats(const Bank& bank, const User& user) {
    // Print statistics.
    std::cout << "Name: " << user.getName() << "\n";
    std::cout << "=================================================\n";
    std::cout << "Cash: $" << user.getCash() << "\n";
    std::cout << "Bank Card Balance: $" << bank.getBankBalance() << "\n";
    std::cout << "Credit Card Balance: $" << bank.getCreditBalance() << "\n";
    std::cout << "=================================================\n";
}

void showMainMenu() {
    // Print main menu.
    std::cout << "1) Withdraw Money\n";
    std::cout << "2) Deposit Money\n"; 
    std::cout << "3) Account Info\n";
    std::cout << "0) Exit\n";
}