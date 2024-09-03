#include "NoJumpArea.h"
#include "syati.h"

namespace pt
{
    NoJumpArea::NoJumpArea(const char *pName) : AreaObj(pName) {}
    NoJumpArea::~NoJumpArea() {}

    void NoJumpArea::init(const JMapInfoIter &rIter)
    {
        AreaObj::init(rIter);
        MR::connectToSceneAreaObj(this);
    }
    extern "C"
    {
        bool __kAutoMap_80399D30(Mario *);
    }
    bool isForbidPlayerJump(Mario *pMario)
    {
        if (MR::isPlayerInAreaObj("NoJumpArea"))
            return true;
        return __kAutoMap_80399D30(pMario);
    }
    kmCall(0x803992AC, isForbidPlayerJump);
    const char *NoJumpArea::getManagerName() const
    {
        return "NoJumpArea";
    }
}