#include "ContactBST.h"
#include <cassert>
#include <iostream>

void testContactBST() {
    ContactBST phonebook;

    Contact contact1("John Doe", "1234567890", "john.doe@example.com", "123 Main St");
    Contact contact2("Jane Smith", "0987654321", "jane.smith@example.com", "456 Elm St");

    phonebook.insert(contact1);
    phonebook.insert(contact2);

    Contact result = phonebook.searchByName("John Doe");
    assert(result.name == "John Doe");

    result = phonebook.searchByPhoneNumber("0987654321");
    assert(result.phoneNumber == "0987654321");

    phonebook.deleteContact("John Doe");
    result = phonebook.searchByName("John Doe");
    assert(result.name == "");

    phonebook.updateContact(Contact("Jane Smith", "1111111111", "jane.updated@example.com", "New Address"));
    result = phonebook.searchByName("Jane Smith");
    assert(result.phoneNumber == "1111111111");
    assert(result.email == "jane.updated@example.com");
    assert(result.address == "New Address");

    std::cout << "ContactBST tests passed." << std::endl;
}

int main() {
    testContactBST();
    return 0;
}
