#ifndef USER_H
#define USER_H

#include <string>

class User {
private: // User's information (name, password, email, cash).
    std::string userName_;
    std::string password_;
    std::string email_;
    long long cash_;

public:
    // Constructor (for initial values)
    User();
    
    // Methods (spend, add, get, set) created to modify a user's existing information.
    // Let's create writing rules based on (method type).
    void spendCash(long long amount);   

    void addCash(long long amount);

    long long getCash() const;
    std::string getName() const;
    std::string getPassword() const;
    std::string getEmail() const;
    
    void setName(const std::string& name);
    void setPassword(const std::string& password);
    void setEmail(const std::string& email);
};

#endif // USER_H
