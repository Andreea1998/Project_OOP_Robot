#include "Robot.h"
#include<iostream>
using namespace std;


Robot_albastru::Robot_albastru(){
    lin=0;
    col=0;
}
~Robot_albastru::Robot_albastru(){}

Robot_galben::Robot_galben(){
    lin=0;
    col=0;
}
~Robot_galben::Robot_galben(){}

Robot_rosu::Robot_rosu(){
    lin=0;
    col=0;
}
~Robot_rosu::Robot_rosu(){}

void Robot::get_comoara(Harta h, int &x, int &y){
    x=h.x;
    y=h.y;
}

void Robot_albastru::Deplasare(Harta h){
    int x,y;
    if(p[lin][col]==4)
        for(i=1;i<=2;i++){
            get_comoara(h,x,y);
            if(lin==x && col==y){ h.final=1; return; }
            if(lin==x){ col++; return; }
            if(col==y){ lin++; return; }
            col++;
            lin++;
        }
    if(p[lin][col]==0 || p[lin][col]==5){
        get_comoara(h,x,y);
        if(lin==x && col==y){ h.final=1; return; }
        if(lin==x){ col++; return; }
        if(col==y){ lin++; return; }
        col++;
        lin++;
    }
    if(p[lin][col]==6) return;
}

void Robot_galben::Deplasare(Harta h){
    int x,y;
    if(p[lin][col]==4)
        for(i=1;i<=2;i++){
            get_comoara(h,x,y);
            if(lin==x && col==y){ h.final=1; return; }
            if(lin==x){ col++; return; }
            if(col==y){ lin++; return; }
            col++;
            lin++;
    if(p[lin][col]==0 || p[lin][col]==4){
        get_comoara(h,x,y);
        if(lin==x && col==y){ h.final=1; return; }
        if(lin==x){ col++; return; }
        if(col==y){ lin++; return; }
        col++;
        lin++;
    }
    if(p[lin][col]==6) return;
}

void Robot_rosu::Deplasare(Harta h, int &ok){
    int x,y;
    if(p[lin][col]==5)ok=1;
    if(p[lin][col]==0 || p[lin][col]==4 || p[lin][col]==5 || (p[lin][col]==6 && ok==1) ){
        get_comoara(h,x,y);
        if(lin==x && col==y){ h.final=1; return; }
        if(lin==x){ col++; return; }
        if(col==y){ lin++; return; }
        col++;
        lin++;
    }
    if(p[lin][col]==6 && ok==0) return;
}
