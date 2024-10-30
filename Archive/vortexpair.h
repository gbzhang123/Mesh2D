#ifndef EDGEFUNCTIONS_H
#define EDGEFUNCTIONS_H
#define NUMPTS 20
double hcenter = 0.05;
double hgrowth = 1.1;
double hfar = 0.5;

double p0x = -10.;
double p1x = -1.5;
double p2x = 1.5;
double p3x = 10.;

double p0y = -10.;
double p1y = -1.;
double p2y = 1.;
double p3y = 10.;

int N0x = findNlayers(hcenter, hgrowth, p1x-p0x, hfar);
int N1x = std::ceil((p2x - p1x) / hcenter);
int N2x = findNlayers(hcenter, hgrowth, p3x-p2x, hfar);

double pts[NUMPTS][2];

int N0y = findNlayers(hcenter, hgrowth, p1y-p0y, hfar);
int N1y = std::ceil((p2y-p1y)/hcenter);
int N2y = findNlayers(hcenter, hgrowth, p3y-p2y, hfar);

CompositEdge Cedge03;
CompositEdge Cedge69;
CompositEdge Cedge06;
CompositEdge Cedge39;

LineEdge Cedge01(pts[0], pts[1], N0x, BOUNDARYLAYER1, 0, 0, 0, hcenter, hgrowth, N0x-1);
LineEdge Cedge12(pts[1], pts[2], N1x, UNIFORM, 0., 0.);
LineEdge Cedge23(pts[2], pts[3], N2x, BOUNDARYLAYER0, hcenter, hgrowth, N2x-1, 0, 0, 0);
std::vector<double> edge01(double s) {
    return Cedge01.Evaluate(s);
}
std::vector<double> edge12(double s) {
    return Cedge12.Evaluate(s);
}
std::vector<double> edge23(double s) {
    return Cedge23.Evaluate(s);
}
std::vector<double> edge03(double s) {
    return Cedge03.Evaluate(s);
}

LineEdge Cedge67(pts[6], pts[7], N0x, BOUNDARYLAYER1, 0, 0, 0, hcenter, hgrowth, N0x-1);
LineEdge Cedge78(pts[7], pts[8], N1x, UNIFORM, 0., 0.);
LineEdge Cedge89(pts[8], pts[9], N2x, BOUNDARYLAYER0, hcenter, hgrowth, N2x-1, 0, 0, 0);
std::vector<double> edge67(double s) {
    return Cedge67.Evaluate(s);
}
std::vector<double> edge78(double s) {
    return Cedge78.Evaluate(s);
}
std::vector<double> edge89(double s) {
    return Cedge89.Evaluate(s);
}
std::vector<double> edge69(double s) {
    return Cedge69.Evaluate(s);
}

LineEdge Cedge010(pts[0], pts[10], N0y, BOUNDARYLAYER1, 0, 0, 0, hcenter, hgrowth, N0y-1);
LineEdge Cedge104(pts[10], pts[4], N1y, UNIFORM, 0, 0);
LineEdge Cedge46(pts[4], pts[6], N2y, BOUNDARYLAYER0, hcenter, hgrowth, N2y-1, 0, 0, 0);
std::vector<double> edge010(double s) {
    return Cedge010.Evaluate(s);
}
std::vector<double> edge104(double s) {
    return Cedge104.Evaluate(s);
}
std::vector<double> edge46(double s) {
    return Cedge46.Evaluate(s);
}
std::vector<double> edge06(double s) {
    return Cedge06.Evaluate(s);
}

LineEdge Cedge311(pts[3], pts[11], N0y, BOUNDARYLAYER1, 0, 0, 0, hcenter, hgrowth, N0y-1);
LineEdge Cedge115(pts[11], pts[5], N1y, UNIFORM, 0, 0);
LineEdge Cedge59(pts[5], pts[9], N2y, BOUNDARYLAYER0, hcenter, hgrowth, N2y-1, 0, 0, 0);
std::vector<double> edge311(double s) {
    return Cedge311.Evaluate(s);
}
std::vector<double> edge115(double s) {
    return Cedge115.Evaluate(s);
}
std::vector<double> edge59(double s) {
    return Cedge59.Evaluate(s);
}
std::vector<double> edge39(double s) {
    return Cedge39.Evaluate(s);
}

int InitPts(){
    pts[0][0] = p0x;
    pts[0][1] = p0y;
    pts[1][0] = p1x;
    pts[1][1] = p0y;
    pts[2][0] = p2x;
    pts[2][1] = p0y;
    pts[3][0] = p3x;
    pts[3][1] = p0y;

    pts[10][0] = p0x;
    pts[10][1] = p1y;
    pts[11][0] = p3x;
    pts[11][1] = p1y;

    pts[4][0] = p0x;
    pts[4][1] = p2y;
    pts[5][0] = p3x;
    pts[5][1] = p2y;

    pts[6][0] = p0x;
    pts[6][1] = p3y;
    pts[7][0] = p1x;
    pts[7][1] = p3y;
    pts[8][0] = p2x;
    pts[8][1] = p3y;
    pts[9][0] = p3x;
    pts[9][1] = p3y;

    Cedge03.addEdge(Cedge01, (void*) edge01);
    Cedge03.addEdge(Cedge12, (void*) edge12);
    Cedge03.addEdge(Cedge23, (void*) edge23);

    Cedge69.addEdge(Cedge67, (void*) edge67);
    Cedge69.addEdge(Cedge78, (void*) edge78);
    Cedge69.addEdge(Cedge89, (void*) edge89);

    Cedge06.addEdge(Cedge010, (void*) edge010);
    Cedge06.addEdge(Cedge104, (void*) edge104);
    Cedge06.addEdge(Cedge46, (void*) edge46);

    Cedge39.addEdge(Cedge311, (void*) edge311);
    Cedge39.addEdge(Cedge115, (void*) edge115);
    Cedge39.addEdge(Cedge59, (void*) edge59);
    return 0;
}

#endif