#ifndef PARAMS_H
#define PARAMS_H
#define NUMPTS 20
#ifndef FOILAOA
    #define FOILAOA 15
#endif
#ifndef FOILM
    #define FOILM 0
#endif
#ifndef FOILP
    #define FOILP 0
#endif
#ifndef FOILT
    #define FOILT 12
#endif
double AoA = FOILAOA/180.*M_PI;
double chamber = FOILM*0.01;
double chamberp = FOILP*0.1;
double Thickness = FOILT*0.01;

double xInFoil = 0.04;
double hFirstLayerInFoil = 0.003;
double progressInFoil = 1.01;
double rBoundaryLayerInFoil = 1.;
double maxLayerhInFoil = 0.02;
double infoilRatio = 0.1;

double hFirstLayer = 0.005;
double progress = 1.2;
double rBoundaryLayer = 0.7;
double maxLayerh = 0.025;

double chordLen= 1.;
double xmidLow1 = 0.2;
double xmidUp1 = 0.2;
double xmidLow2 = 0.006;
double xmidUp2 = 0.006;
int nLow1 = 68;
int nLow2 = 24;
int nUp1 = 68;
int nUp2 = 24;
int nFront = 24;
double hTrailingEdge = hFirstLayer*1.;

double wakeLen = 1.;
double wakeyUp  = 0.133*Thickness;
double wakeDown =-0.133*Thickness;
int nWake = 60;
double nearWakeDiffuseAngle = 0./180.*M_PI;

double xBoxLeft = -40.;
double xBoxRight = 40.;
double yBoxUp = 40.;
double yBoxDown = -40.;
int nBoxLeft = 8;
int nBoxRight = 8;
int nBoxUp = 8;
int nBoxDown = 8;

int nFarWakex = 88;
int nFarWakey = 90;
double farWakeAoA = 10./180.*M_PI;
double wakeDiffuseAngle = 20./180.*M_PI;
double farWakeRight = 8.;
double farWakeUp = 1.5;
double farWakeDown = -1.5;
#endif
