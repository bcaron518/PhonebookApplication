# Phonebook Application Design

This document provides an overview of the design and architecture of the Phonebook Application.

## Class Diagram

### Contact Class
- **Attributes**: `name`, `phoneNumber`, `email`, `address`
- **Methods**: Constructors, Getters, Setters

### ContactBST Class
- **Attributes**: `root` (pointer to ContactNode)
- **Methods**: `insert`, `searchByName`, `searchByPhoneNumber`, `deleteContact`, `updateContact`, `displayContacts`, `saveToFile`, `loadFromFile`

### ContactNode Class
- **Attributes**: `contact`, `left`, `right`
- **Methods**: Constructor

## Data Flow

1. **Adding a Contact**:
    - User inputs contact details.
    - Application inserts contact into BST.

2. **Searching a Contact**:
    - User inputs search criteria (name or phone number).
    - Application searches BST for matching contact.

3. **Updating a Contact**:
    - User inputs new contact details.
    - Application updates contact in BST.

4. **Deleting a Contact**:
    - User inputs name of contact to delete.
    - Application removes contact from BST.

5. **Displaying Contacts**:
    - Application traverses BST and displays all contacts.

6. **Saving Contacts**:
    - Application writes contacts to file.

7. **Loading Contacts**:
    - Application reads contacts from file and populates BST.

## Multithreading

- Parallel processing for searching and sorting contacts.
- Threads are created to handle these operations to improve performance.

## GUI Design

- **Main Window**: Provides menu options to add, search, update, delete, display contacts.
- **Forms**: Input forms for adding and updating contact details.

## Security

- Data encryption for secure storage of contacts.
- Ensure all user data is kept private and protected.
