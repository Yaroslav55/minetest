
#include "irrlichttypes_extrabloated.h"

class Hud
{
public:
    void drawHud( video::IVideoDriver *driver, video::ITexture *txr,
                  const core::rect<s32> &destrect, const core::rect<s32> &srcrect,
                  const core::rect<s32> *cliprect, const video::SColor *const colors,
                  bool usealpha );


private:
};
