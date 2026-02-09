#include <iostream>

#include "MyLibrary.h"
#include "RegularMember.h"
#include "PremiumMember.h"

int main() {
    MyLibrary library;

    Book book1("1984", "George Orwell", "ISBN001");
    Book book2("The Hobbit", "J.R.R. Tolkien", "ISBN002");

    library.addBook(book1);
    library.addBook(book2);

    RegularMember alice("Alice", 1);
    PremiumMember bob("Bob", 2);

    library.registerMember(alice);
    library.registerMember(bob);

    if (library.borrowBook(alice, book1)) {
        std::cout << "Alice borrowed 1984\n";
    }

    if (library.borrowBook(bob, book2)) {
        std::cout << "Bob borrowed The Hobbit\n";
    }

    if (library.returnBook(alice, book1)) {
        std::cout << "Alice returned 1984\n";
    }

    return 0;
}
