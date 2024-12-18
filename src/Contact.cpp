#include "Contact.h"

// Constructors
Contact::Contact() : name(""), phoneNumber(""), email(""), address("") {}

Contact::Contact(std::string name, std::string phoneNumber, std::string email, std::string address) {
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->email = email;
    this->address = address;
}

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
