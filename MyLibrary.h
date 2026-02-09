#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <vector>
#include "AbstractLibrary.h"

class MyLibrary : public AbstractLibrary {
private:
    std::vector<Book> books;
    std::vector<Member*> members;

public:
    void addBook(Book& book) override;

    void registerMember(Member& member);

    bool borrowBook(Member& member, Book& book) override;
    bool returnBook(Member& member, Book& book) override;
};

#endif
