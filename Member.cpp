#include "Member.h"

Member::Member(const std::string& name, int memberId)
    : name(name), memberId(memberId) {}

std::string Member::getName() const {
    return name;
}

int Member::getMemberId() const {
    return memberId;
}

int Member::getBorrowedBookCount() const {
    return static_cast<int>(borrowedBooks.size());
}

bool Member::borrowBook(Book* book) {
    if (getBorrowedBookCount() >= getMaxBooks()) {
        return false;
    }

    borrowedBooks.push_back(book);
    return true;
}

bool Member::returnBook(Book* book) {
    for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it) {
        if (*it == book) {
            borrowedBooks.erase(it);
            return true;
        }
    }
    return false;
}
