#include "myGui.h"

void Hud::drawHud( video::IVideoDriver *driver, video::ITexture *txr,
              const core::rect<s32> &destrect, const core::rect<s32> &srcrect,
              const core::rect<s32> *cliprect, const video::SColor *const colors,
              bool usealpha)
{

////    imgrect2.UpperLeftCorner.X  -= (m_padding*3);
////    imgrect2.UpperLeftCorner.Y  -= (m_padding*3);
////    imgrect2.LowerRightCorner.X += (m_padding*3);
////    imgrect2.LowerRightCorner.Y += (m_padding*3);

////    video::ITexture *texture = tsrc->getTexture("test.png");
////    core::dimension2di imgsize(texture->getOriginalSize());

////    draw2DImageFilterScaled(driver, texture, imgrect2,
////        core::rect<s32>(core::position2d<s32>(1,1), imgsize),
////        NULL, hbar_colors, true);
}
