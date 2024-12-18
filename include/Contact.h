#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
public:
    std::string name;
    std::string phoneNumber;
    std::string email;
    std::string address;

    Contact();
    Contact(std::string name, std::string phoneNumber, std::string email, std::string address);

    // Getters and Setters
};

#endif // CONTACT_H
