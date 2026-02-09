#include <iostream>

#include "MyLibrary.h"
#include "RegularMember.h"
#include "PremiumMember.h"

int main() {
    MyLibrary library;

    // Create books
    Book book1("1984", "George Orwell", "ISBN001");
    Book book2("The Hobbit", "J.R.R. Tolkien", "ISBN002");

    // Add books to library
    library.addBook(book1);
    library.addBook(book2);

    // Create members
    RegularMember alice("Alice", 1);
    PremiumMember bob("Bob", 2);

    // Register members
    library.registerMember(alice);
    library.registerMember(bob);

    // Borrow books
    if (library.borrowBook(alice, book1)) {
        std::cout << "Alice borrowed 1984\n";
    }

    if (library.borrowBook(bob, book2)) {
        std::cout << "Bob borrowed The Hobbit\n";
    }

    // Return a book
    if (library.returnBook(alice, book1)) {
        std::cout << "Alice returned
