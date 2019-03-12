#ifndef ROBOT_H
#define ROBOT_H

class Robot{
    protected:
        int lin, col;
    public:
        void get_comoara(Harta h, int &x, int &y);
        virtual void Deplasare(int **&p)=0;
}

class Robot_albastru: public Robot{
    public:
        Robot_albastru();
        void Deplasare(int **&p);
        ~Robot_albastru();
}

class Robot_galben: public Robot{
    public:
        Robot_galben();
        void Deplasare(int **&p);
        ~Robot_galben();
}

class Robot_rosu: public Robot{
    public:
        Robot_rosu();
        void Deplasare(int **&p);
        ~Robot_albastru();
}

#endif
