//for 3D simulation of isolated vortex near a wall
#ifndef PARAMS_H
#define PARAMS_H
#define NUMPTS 20
double hfirstlayer = 0.025;
double hgrowth = 1.5;
double meshsize = 0.025;

double p0x = 0.;
double p1x = 2.;
double p2x = 5.;
double p3x = 7.;

double p0y = 0.;
double p1y = meshsize;
double p2y = 1.;
double p3y = 5.;

int N0y = 1;
int N2y = 6;
int N0x = 6;
int N2x = 6;

#endif