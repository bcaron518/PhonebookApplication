#include "Contact.h"

Contact::Contact() {}

Contact::Contact(std::string name, std::string phoneNumber, std::string email, std::string address) {
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->email = email;
    this->address = address;
}

// Getters and Setters for Contact class
