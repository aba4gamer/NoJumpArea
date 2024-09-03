#pragma once

#include "syati.h"
#include "Game/AreaObj/AreaObj.h"

namespace pt {
    class NoJumpArea : public AreaObj {
    public:
        NoJumpArea(const char *pName);
        ~NoJumpArea();
        virtual void init(const JMapInfoIter &rIter);
        virtual void movement();
        const char *getManagerName() const;
    };
};