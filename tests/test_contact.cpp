#include "Contact.h"
#include <cassert>
#include <iostream>

void testContactClass() {
    Contact contact("John Doe", "1234567890", "john.doe@example.com", "123 Main St");
    
    assert(contact.name == "John Doe");
    assert(contact.phoneNumber == "1234567890");
    assert(contact.email == "john.doe@example.com");
    assert(contact.address == "123 Main St");

    contact.name = "Jane Smith";
    contact.phoneNumber = "0987654321";
    contact.email = "jane.smith@example.com";
    contact.address = "456 Elm St";

    assert(contact.name == "Jane Smith");
    assert(contact.phoneNumber == "0987654321");
    assert(contact.email == "jane.smith@example.com");
    assert(contact.address == "456 Elm St");

    std::cout << "Contact class tests passed." << std::endl;
}

int main() {
    testContactClass();
    return 0;
}
