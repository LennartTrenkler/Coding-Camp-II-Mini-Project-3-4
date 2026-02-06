#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>
#include "Book.h"

class Member {
protected:
    std::string name;
    int memberId;
    std::vector<Book*> borrowedBooks;

public:
    Member(const std::string& name, int memberId);
    virtual ~Member() = default;

    std::string getName() const;
    int getMemberId() const;

    bool borrowBook(Book* book);
    bool returnBook(Book* book);

    int getBorrowedBookCount() const;

    virtual int getMaxBooks() const = 0;
};

#endif
