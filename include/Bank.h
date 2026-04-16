#ifndef BANK_H
#define BANK_H

class Bank {
private: // Stores bank account and credit balance information.
    long long bankBalance_;
    long long creditBalance_;

public:
    // Constructor (for initial values).
    Bank();
    
    // Methods for managing bank and credit card operations.
    // Let's create writing rules based on (method type).
    void withdrawBank(long long amount);
    void withdrawCredit(long long amount);

    void depositBank(long long amount);
    void depositCredit(long long amount);

    long long getBankBalance() const;
    long long getCreditBalance() const;
};

#endif // BANK_H