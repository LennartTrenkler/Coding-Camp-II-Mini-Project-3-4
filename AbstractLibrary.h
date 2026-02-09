#ifndef ABSTRACTLIBRARY_H
#define ABSTRACTLIBRARY_H

#include "Book.h"
#include "Member.h"

class AbstractLibrary {
public:
    virtual ~AbstractLibrary() = default;

    virtual void addBook(Book& book) = 0;
    virtual bool borrowBook(Member& member, Book& book) = 0;
    virtual bool returnBook(Member& member, Book& book) = 0;
};

#endif
