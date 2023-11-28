#include "library.h"
#include <iostream>

Library::Library() {
    bookCount = 0;
}

bool Library::addBook(const std::string& bookName) {
    if (bookCount >= 10) {
        std::cout << "Library is full. Cannot add more books." << std::endl;
        return false;
    }

    for (int i = 0; i < bookCount; i++) {
        if (books[i] == bookName) {
            std::cout << "Book already exists in the library." << std::endl;
            return false;
        }
    }

    books[bookCount] = bookName;
    bookCount++;
    return true;
}

bool Library::removeBook(const std::string& bookName) {
    for (int i = 0; i < bookCount; i++) {
        if (books[i] == bookName) {
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            return true;
        }
    }

    std::cout << "Book does not exist in the library." << std::endl;
    return false;
}

void Library::print() {
    if (bookCount == 0) {
        std::cout << "Library is empty." << std::endl;
        return;
    }

    std::cout << "Library contents:" << std::endl;
    for (int i = 0; i < bookCount; i++) {
        std::cout << books[i] << std::endl;
    }
}








