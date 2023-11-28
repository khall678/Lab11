//include headers and libraries

#include <iostream>
#include <string>
#include "Library.h"

int main() {
    Library library;

    std::string command;
    std::string bookName;

    while (true) {
        std::cout << "Enter a command: ";
        std::cin >> command;

        if (command == "a") {
            std::cin >> bookName;
            if (library.addBook(bookName)) {
                std::cout << "Book added successfully!" << std::endl;
            } else {
                std::cout << "Book could not be added. Either it already exists or there is no availability." << std::endl;
            }
        } else if (command == "r") {
            std::cin >> bookName;
            if (library.removeBook(bookName)) {
                std::cout << "Book removed successfully!" << std::endl;
            } else {
                std::cout << "Book could not be removed. It does not exist in the library." << std::endl;
            }
        } else if (command == "p") {
            library.printLibrary();
        } else if (command == "q") {
            break;
        }
    }

    return 0;
}
