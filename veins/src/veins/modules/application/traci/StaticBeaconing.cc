#include "StaticBeaconing.h"

Define_Module(StaticBeaconing);

void StaticBeaconing::initialize(int stage) {
    BaseWaveApplLayer::initialize(stage);
    if (stage == 0) {
        //Initializing members and pointers of your application goes here
        EV << "Initializing " << par("appName").stringValue() << std::endl;
    }
    else if (stage == 1) {
        //Initializing members that require initialized other modules goes here

    }
}

void StaticBeaconing::finish() {
    BaseWaveApplLayer::finish();
    //statistics recording goes here

}

void StaticBeaconing::onBSM(BasicSafetyMessage* beacon) {
    //Your application has received a beacon message from another car or RSU
    //code for handling the message goes here
    EV << "***************** Beacon recibido *****************" << std::endl;
}

void StaticBeaconing::handleSelfMsg(cMessage* msg) {
    BaseWaveApplLayer::handleSelfMsg(msg);
    //this method is for self messages (mostly timers)
    //it is important to call the BaseWaveApplLayer function for BSM and WSM transmission

}

void StaticBeaconing::handlePositionUpdate(cObject* obj) {
    BaseWaveApplLayer::handlePositionUpdate(obj);
    //the vehicle has moved. Code that reacts to new positions goes here.
    //member variables such as currentPosition and currentSpeed are updated in the parent class

}
