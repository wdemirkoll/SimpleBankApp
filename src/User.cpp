#include "User.h"

User::User() {
    // User's information and initial cash value.
    userName_ = "";
    password_ = "";
    email_ = "";
    cash_ = 2500;
}


void User::spendCash(long long amount) {
    // Decrease balance if amount is valid and sufficient.
    if (amount <= cash_ && amount > 0) cash_ -= amount;
}

void User::addCash(long long amount) {
    // Increase balance if amount is valid.
    if (amount > 0) cash_ += amount;
}

long long User::getCash() const {
    return cash_;
}

std::string User::getName() const {
    return userName_;
}

std::string User::getPassword() const {
    return password_;
}

std::string User::getEmail() const {
    return email_;
}

void User::setName(const std::string& name) {
    userName_ = name;
}

void User::setPassword(const std::string& password) {
    password_ = password;
}

void User::setEmail(const std::string& email) {
    email_ = email;
}