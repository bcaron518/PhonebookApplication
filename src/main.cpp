#include <iostream>
#include "Contact.h"
#include "ContactBST.h"

void displayMenu() {
    std::cout << "Phonebook Application Menu:" << std::endl;
    std::cout << "1. Add Contact" << std::endl;
    std::cout << "2. Search Contact by Name" << std::endl;
    std::cout << "3. Search Contact by Phone Number" << std::endl;
    std::cout << "4. Update Contact" << std::endl;
    std::cout << "5. Delete Contact" << std::endl;
    std::cout << "6. Display All Contacts" << std::endl;
    std::cout << "7. Save Contacts" << std::endl;
    std::cout << "8. Load Contacts" << std::endl;
    std::cout << "9. Exit" << std::endl;
}

int main() {
    ContactBST phonebook;
    int choice;
    std::string name, phoneNumber;

    while (true) {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                Contact contact;
                std::cout << "Enter name: ";
                std::cin >> contact.name;
                std::cout << "Enter phone number: ";
                std::cin >> contact.phoneNumber;
                std::cout << "Enter email: ";
                std::cin >> contact.email;
                std::cout << "Enter address: ";
                std::cin >> contact.address;
                phonebook.insert(contact);
                break;
            }
            case 2:
                std::cout << "Enter name to search: ";
                std::cin >> name;
                phonebook.searchByName(name);
                break;
            case 3:
                std::cout << "Enter phone number to search: ";
                std::cin >> phoneNumber;
                phonebook.searchByPhoneNumber(phoneNumber);
                break;
            case 4:
                // Update contact functionality
                break;
            case 5:
                std::cout << "Enter name to delete: ";
                std::cin >> name;
                phonebook.deleteContact(name);
                break;
            case 6:
                phonebook.displayContacts();
                break;
            case 7:
                phonebook.saveToFile("contacts.txt");
                break;
            case 8:
                phonebook.loadFromFile("contacts.txt");
                break;
            case 9:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
