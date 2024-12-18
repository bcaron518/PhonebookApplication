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

#include "Contact.h"

// Constructors
Contact::Contact() : name(""), phoneNumber(""), email(""), address("") {}

Contact::Contact(std::string name, std::string phoneNumber, std::string email, std::string address)
    : name(name), phoneNumber(phoneNumber), email(email), address(address) {}

// Getters
std::string Contact::getName() const {
    return name;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getEmail() const {
    return email;
}

std::string Contact::getAddress() const {
    return address;
}

// Setters
void Contact::setName(const std::string& newName) {
    name = newName;
}

void Contact::setPhoneNumber(const std::string& newPhoneNumber) {
    phoneNumber = newPhoneNumber;
}

void Contact::setEmail(const std::string& newEmail) {
    email = newEmail;
}

void Contact::setAddress(const std::string& newAddress) {
    address = newAddress;
}
