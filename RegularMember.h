#ifndef REGULARMEMBER_H
#define REGULARMEMBER_H

#include "Member.h"

class RegularMember : public Member {
public:
    RegularMember(const std::string& name, int memberId);

    int getMaxBooks() const override;
};

#endif
