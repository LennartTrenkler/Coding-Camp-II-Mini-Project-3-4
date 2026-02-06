#ifndef PREMIUMMEMBER_H
#define PREMIUMMEMBER_H

#include "Member.h"

class PremiumMember : public Member {
public:
    PremiumMember(const std::string& name, int memberId);

    int getMaxBooks() const override;
};

#endif
