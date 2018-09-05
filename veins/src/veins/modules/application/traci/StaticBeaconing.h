#ifndef __VEINS_STATICBEACONING_H_
#define __VEINS_STATICBEACONING_H_

#include <omnetpp.h>
#include "veins/modules/application/ieee80211p/BaseWaveApplLayer.h"

using namespace omnetpp;

class StaticBeaconing : public BaseWaveApplLayer {
    public:
        virtual void initialize(int stage);
        virtual void finish();
    protected:
        virtual void onBSM(BasicSafetyMessage* beacon);
        virtual void handleSelfMsg(cMessage* msg);
        virtual void handlePositionUpdate(cObject* obj);
    };

#endif
