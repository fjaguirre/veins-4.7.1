package org.car2x.veins.modules.application.traci;
import org.car2x.veins.modules.application.ieee80211p.BaseWaveApplLayer;

simple StaticBeaconing extends BaseWaveApplLayer
{
    @class(StaticBeaconing);
    string appName = default("Static Beaconing App");
}
