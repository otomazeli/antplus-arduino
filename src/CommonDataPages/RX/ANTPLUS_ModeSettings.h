#ifndef ANTPLUS_MODESETTINGS_h
#define ANTPLUS_MODESETTINGS_h

#include <BaseClasses/ANTPLUS_BaseDataPage.h>

#include "ANT.h"

// Common page 76

class ModeSettings : public BaseDataPage<BroadcastData> {
public:
    ModeSettings(BroadcastData& dp);
    uint8_t getSportMode();
};

#endif // ANTPLUS_MODESETTINGS_h