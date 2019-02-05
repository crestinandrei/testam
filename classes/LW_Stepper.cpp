


#include "LW_Stepper.h"

namespace LW_Stepper {
    typedef LW_Stepper base;

    //Define constructors
    base::LW_Stepper(int nrDePasi,int p0,int p1,int p2,int p3)
    {
        sens=true;
        _pini.resize(4);

        _pini.assign(0,p0);
        _pini.assign(1,p1);
        _pini.assign(2,p2);
        _pini.assign(3,p3);

        _pasiPeRevolutie=nrDePasi;

        _cursa=0;

    }
    //Define methods

    base::rotire()
    {

        int dir=1;

        if(sens!=true){
            dir=-1;
        }
        step(dir);

    }

    base::seteazaCursa(int val)
    {
        _cursa=val;
    }

}
