#include "Bank.h"

Bank::Bank() {
    bankBalance_ = 500;
    creditBalance_ = 100;
}

void Bank::withdrawBank(long long amount) {
    if (amount > 0 && amount <= bankBalance_) bankBalance_ -= amount;
}

void Bank::withdrawCredit(long long amount) {
    if (amount > 0 && amount <= creditBalance_) creditBalance_ -= amount;
}

void Bank::depositBank(long long amount) {
    if (amount > 0) bankBalance_ += amount;
}

void Bank::depositCredit(long long amount) {
    if (amount > 0) creditBalance_ += amount;
}

long long Bank::getBankBalance() const {
    return bankBalance_;
}

long long Bank::getCreditBalance() const {
    return creditBalance_;
}