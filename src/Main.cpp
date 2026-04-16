#include "Bank.h"
#include "Console.h"
#include "Menus.h"
#include "User.h"
#include <iostream>
#include <string>

int main() {
    Bank bank;
    User user;
    
    // Variables required for selecting options and entering quantities in menus.
    long long amountChoice;
    short int choice;
    short int cardChoice;

    while (true) {
        clearConsole();
        showStats(bank, user);
        showMainMenu();

        std::cout << "Choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 0:
            return 0;

        case 1: {
            std::cout << "Which card will you withdraw money from: ";
            std::cout << "\n1) From bank card\n";
            std::cout << "2) From credit card\n";

            std::cin >> cardChoice;
            std::cin.ignore();

            std::cout << "Enter amount: $";
            std::cin >> amountChoice;
            std::cin.ignore();

            if (amountChoice > 0 && cardChoice == 1) {
                if (amountChoice <= bank.getBankBalance()) {
                    bank.withdrawBank(amountChoice);
                } 
                else {
                    std::cout << "Insufficient bank balance\n";
                }
                pauseConsole();
            }
            else if (amountChoice > 0 && cardChoice == 2) {
                if (amountChoice <= bank.getCreditBalance()) {
                    bank.withdrawCredit(amountChoice);
                } 
                else {
                    std::cout << "Insufficient credit balance\n";
                }
                pauseConsole();
            }
            break;
        }

        case 2: {
            std::cout << "Which card do you want to deposit money into: ";
            std::cout << "\n1) Into bank card\n";
            std::cout << "2) Into credit card\n";

            std::cin >> cardChoice;
            std::cin.ignore();

            std::cout << "Enter amount: $";
            std::cin >> amountChoice;
            std::cin.ignore();

            if (amountChoice > 0 && cardChoice == 1) {
                bank.depositBank(amountChoice);
                pauseConsole();
            }
            else if (amountChoice > 0 && cardChoice == 2) {
                bank.depositCredit(amountChoice);
                pauseConsole();
            }
            break;
        }

        case 3:
            std::cout << "Your password: " << user.getPassword() << "\n";
            std::cout << "Your email: " << user.getEmail() << "\n";
            pauseConsole();
            break;
        }
    }
}