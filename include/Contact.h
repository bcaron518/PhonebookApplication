#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
public:
    // Constructors
    Contact();
    Contact(std::string name, std::string phoneNumber, std::string email, std::string address);

    // Getters
    std::string getName() const;
    std::string getPhoneNumber() const;
    std::string getEmail() const;
    std::string getAddress() const;

    // Setters
    void setName(const std::string& name);
    void setPhoneNumber(const std::string& phoneNumber);
    void setEmail(const std::string& email);
    void setAddress(const std::string& address);

private:
    std::string name;
    std::string phoneNumber;
    std::string email;
    std::string address;
};

#endif // CONTACT_H
