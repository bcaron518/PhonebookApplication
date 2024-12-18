cmake_minimum_required(VERSION 3.10)

# Set project name
project(PhonebookApplication)

# Add C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Add executable
add_executable(phonebook_application ${SOURCES})

# Link libraries
target_link_libraries(phonebook_application Qt5::Widgets)

# Add tests
add_executable(test_contact tests/test_contact.cpp)
add_executable(test_contactBST tests/test_contactBST.cpp)

# Enable testing
enable_testing()

# Add tests to CTest
add_test(NAME test_contact COMMAND test_contact)
add_test(NAME test_contactBST COMMAND test_contactBST)
