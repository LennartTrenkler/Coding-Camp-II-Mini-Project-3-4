#include "MyLibrary.h"

void MyLibrary::addBook(Book& book) {
    books.push_back(book);
}

void MyLibrary::registerMember(Member& member) {
    members.push_back(&member);
}

bool MyLibrary::borrowBook(Member& member, Book& book) {
    return member.borrowBook(&book);
}

bool MyLibrary::returnBook(Member& member, Book& book) {
    return member.returnBook(&book);
}
