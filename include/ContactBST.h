#ifndef CONTACTBST_H
#define CONTACTBST_H

#include "Contact.h"

class ContactNode {
public:
    Contact contact;
    ContactNode* left;
    ContactNode* right;

    ContactNode(Contact newContact);
};

class ContactBST {
private:
    ContactNode* root;

    // Utility functions for BST operations
public:
    ContactBST();
    void insert(Contact contact);
    Contact searchByName(std::string name);
    Contact searchByPhoneNumber(std::string phoneNumber);
    void deleteContact(std::string name);
    void updateContact(Contact contact);
    void displayContacts();
    void saveToFile(std::string filename);
    void loadFromFile(std::string filename);
};

#endif // CONTACTBST_H
