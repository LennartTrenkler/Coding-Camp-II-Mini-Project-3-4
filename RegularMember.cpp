#include "RegularMember.h"

RegularMember::RegularMember(const std::string& name, int memberId)
    : Member(name, memberId) {}

int RegularMember::getMaxBooks() const {
    return 3;
}
