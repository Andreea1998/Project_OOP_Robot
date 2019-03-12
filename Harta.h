#ifndef HARTA_H
#define HARTA_H
#include "Robot.h"


class Harta{
        void Afisare_Harta();
        int Alegere_Robot();
    public:
        Harta(int);
        ~Harta();
        void Runda();
    protected:
        int dim_mat;
        int **p,x,y,final;
};



#endif // HARTA_H
