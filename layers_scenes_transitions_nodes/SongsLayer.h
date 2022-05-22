#ifndef __SONGSLAYER_H__
#define __SONGSLAYER_H__

#include <gd.h>

namespace gd {
    class GDH_DLL SongsLayer : public GJDropDownLayer {
        public:
            static SongsLayer* create() {
                return reinterpret_cast<SongsLayer*(__fastcall*)()>(base + 0x2513B0)();
            }
    };
}

#endif
