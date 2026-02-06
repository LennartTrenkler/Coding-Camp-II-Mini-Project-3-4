#include "PremiumMember.h"

PremiumMember::PremiumMember(const std::string& name, int memberId)
    : Member(name, memberId) {}

int PremiumMember::getMaxBooks() const {
    return 5;
}
