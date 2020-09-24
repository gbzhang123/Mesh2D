//for 3D simulation of Re400, k2, A=0.5, mesh is reduced to extreme,
//flexible boundary thickness, with 1500 elements
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

double xInFoil = 0.02;
double hFirstLayerInFoil = 0.01;
double progressInFoil = 1.4;
double rBoundaryLayerInFoil = 1.;
double maxLayerhInFoil = 0.04;
double infoilRatio = 0.02;

double hFirstLayer = 0.004;
double progress = 1.4;
double rBoundaryLayer = 0.3;
double rBoundaryLayer1 = 0.3;
double rBoundaryLayer2 = 0.3;
double rBoundaryLayer3 = 0.3;
double rBoundaryLayer4 = 0.3;
double rBoundaryLayer5 = 0.3;
double rBoundaryLayer6 = 0.8;
double rBoundaryLayer7 = 0.8;
double maxLayerh = 0.08;

double chordLen= 1.;
double xmidLow1 = 0.5;
double xmidUp1 = 0.5;
double xmidLow2 = 0.006;
double xmidUp2 = 0.006;
int nLow1 = 10;
int nLow2 = 12;
int nUp1 = 10;
int nUp2 = 12;
int nFront = 7;
double hTrailingEdge = hFirstLayer*1.5;

double wakeLen = 0.1;
double wakeyUp  = 0.08*Thickness;
double wakeDown =-0.08*Thickness;
int nWake = 3;
double nearWakeDiffuseAngle = 0./180.*M_PI;

double xBoxLeft = -13.;
double xBoxRight = 17.;
double yBoxUp = 10.;
double yBoxDown = -10.;
int nBoxLeft = 4;
int nBoxRight = 4;
int nBoxUp = 6;
int nBoxDown = 6;

int nFarWakex = 21;
int nFarWakey = 18;
double farWakeAoA = 13./180.*M_PI;
double wakeDiffuseAngle = 18./180.*M_PI;
double farWakeRight = 6.;
double farWakeUp = 0.8;
double farWakeDown = -1.;
#endif