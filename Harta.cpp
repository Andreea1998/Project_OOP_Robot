#include "Harta.h"
#include<iostream>
using namespace std;

Harta::Harta(int dim){
    dim_mat=dim;
    int i,j;
    p=new int*[dim_mat];
    for(i=0;i<dim_mat;i++)
        p[i]=new int[dim_mat];
    cout<<"Coordonatele comorii:"<<" ";
    cin>>x>>y;
    p[x][y]=10;
    final=0;
    cout<<"Coordonatele itemului nr1:"<<" ";
    cin>>i>>j;
    p[i][j]=4;
    cout<<"Coordonatele itemului nr2:"<<" ";
    cin>>i>>j;
    p[i][j]=5;
    cout<<"Coordonatele capcana:"<<" ";
    cin>>i>>j;
    p[i][j]=6;
}

Harta::~Harta(){
    int i;
    for(i=0;i<dim_mat;i++)
        delete[]p[i];
    delete[]p;
}

int Harta::Alegere_Robot(){
    int i;
    cout<<"Dati tipul robotului:"<<" ";
    cin>>i;
return i;
}

void Harta::Afisare_Harta(){
    int i,j;
    for(i=0;i<dim_mat;i++){
        for(j=0;j<dim_mat;j++)
            cout<<p[i][j]<<" ";
        cout<<endl;
    }
}

void Harta::Runda(){
    int var;
    var=Alegere_Robot();
    if(var==1){
        cout<<"Robotul e albastru:"<<" ";
        Robot_albastru A;
        p[0][0]=1;
        while(final==0){
            cout<<"Vrei sa incepi o runda ?"<<" ";
            cin>>decizie;
            if(decizie==1){
                A.Deplasare(h);
                A.Afisare_Harta();
            }else break;
        }
        cout<<"Robotul a gasit comoara";
        return;
    }
    if(var==2){
        cout<<"Robotul e galben:"<<" ";
        Robot_galben G;
        p[0][0]=2;
        while(final==0){
            cout<<"Vrei sa incepi o runda ?"<<" ";
            cin>>decizie;
            if(decizie==1){
                G.Deplasare(h);
                G.Afisare_Harta();
            }else break;
        }
        cout<<"Robotul a gasit comoara";
        return;
    }
    if(var==3){
        int ok=0;
        cout<<"Robotul e rosu:"<<" ";
        Robot_rosu R;
        p[0][0]=3;
        while(final==0){
            cout<<"Vrei sa incepi o runda ?"<<" ";
            cin>>decizie;
            if(decizie==1){
                R.Deplasare(h,ok);
                R.Afisare_Harta();
            }else break;
        }
        cout<<"Robotul a gasit comoara";
        return;
    }
}
