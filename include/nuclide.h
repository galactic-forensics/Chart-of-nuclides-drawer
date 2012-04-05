/*
 * Copyright Krzysztof Miernik 2012
 * k.a.miernik@gmail.com 
 *
 * Distributed under GNU General Public Licence v3
 */

#ifndef NUCLIDEH
#define NUCLIDEH

#include <string>

using namespace std;

enum DecayMode {
    stable,   // 0
    unbound,  // 1
    betaM,    // 2
    betaP,    // 3
    alpha,    // 4
    fission,  // 5
    proton,   // 6
    twoproton,// 7
    neutron,  // 8
    unknown   // 9
}; 

/** Rather struct then class. See .cpp for comments */
class Nuclide {
public:
    unsigned short Z;
    string elementName;
    unsigned short N;
    unsigned A;
    double massDefect;
    double massError;
    double halfLife;
    string halfLifeString;
    bool extrapolated;

    string spin;
    DecayMode primaryDecayMode;

    void nameElement();
    Nuclide();
};

#endif
