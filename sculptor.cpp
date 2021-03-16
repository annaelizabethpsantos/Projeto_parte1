#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <math.h>

using namespace std;

const int MAX = 30;
const int SMAX = 20;

Sculptor::Sculptor(int _nx, int _ny, int _nz){

int i,j,k;

v = new Voxel**[nx];
for(i=0;i<_nx;i++){
   v[i] = new Voxel*[ny];
    for(j=0;j<_ny;j++){                                            //Aloca a matriz 3D (Voxel);
       v[i][j] = new Voxel[nz];
    }
}

}

Sculptor::~Sculptor(){
    int i,j;
    Voxel ***v;
    for(i=0;i<nx;i++){
     for(j=0;j<ny;j++){
         delete[] v[i][j];
    }
     delete[] v[i];
    }
    delete [] v;
 cout << "Encerrado." << endl;
}
// Construtor com argumentos - Recebe as dimensões do Voxel e as coordenadas do mesmo.

void Sculptor::setColor(float r, float g, float b, float alpha){
    int i,j,k;
    for(i=0;i<nx;i++){
        for(j=0;j<ny;j++){
            for(k=0;k<nz;k++){
               v[i][j][k].r=r;
               v[i][j][k].g=g;
               v[i][j][k].b=b;
               v[i][j][k].a=alpha;  // Chamada da função da classe Sculptor,inserir cor na matriz 3D.
            }
        }
    }
}

void Sculptor::putVoxel(int x, int y, int z)
{
    int i,j,k;
    for(i=0;i<nx;i++){
            for(j=0;j<ny;j++){
                    for(k=0;k<nz;k++){
                    if(i == x, j == y ; k == z){
                        v[i][j][k].isOn = true;
                    }
            }
                    }
    }
}

void Sculptor::cutVoxel(int x, int y, int z)
{
    int i,j,k;
    for(i=0;i<nx;i++){
            for(j=0;j<ny;j++){
                    for(k=0;k<nz;k++){
                    if(i == x, j == y ; k == z){
                       v[i][j][k].isOn = false;
                    }
            }
                    }
    }
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
int i,j,k;
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
int i,j,k;
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{
int i,j,k;
for(i=-radius;i<=radius;i++){
        for(j=-radius;j<=radius;j++){
                for(k=-radius;k<=radius;k++){
                    if(pow(xcenter-i,2)+pow(ycenter-j,2)+pow(zcenter-k,2)<pow(radius,2)){
                        putVoxel(xcenter-i,ycenter-j,zcenter-k);
                    }
                }
        }
                }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
int i,j,k;
for(i=-radius;i<=radius;i++){
        for(j=-radius;j<=radius;j++){
                for(k=-radius;k<=radius;k++){
                    if(pow(xcenter-i,2)+pow(ycenter-j,2)+pow(zcenter-k,2)<pow(radius,2)){
                        cutVoxel(xcenter-i,ycenter-j,zcenter-k);
                    }
                }
        }
                }
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
int i,j,k;
for(i=-rx;i<=rx;i++){
        for(j=-ry;j<=ry;j++){
                for(k=-rz;k<=rz;k++){
                    if((pow(xcenter-i,2)/pow(rx,2))+(pow(ycenter-j,2)/pow(ry,2))+(pow(zcenter-k,2)/pow(rz,2))<1){
                        putVoxel(xcenter-i,ycenter-j,zcenter-k);
                    }
                }
        }
                }
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    int i,j,k;
    for(i=-rx;i<=rx;i++){
            for(j=-ry;j<=ry;j++){
                    for(k=-rz;k<=rz;k++){
                        if((pow(xcenter-i,2)/pow(rx,2))+(pow(ycenter-j,2)/pow(ry,2))+(pow(zcenter-k,2)/pow(rz,2))<1){
                            cutVoxel(xcenter-i,ycenter-j,zcenter-k);
                        }
                    }
            }
                    }
}

void Sculptor::writeOFF(char *filename)
{
    fstream arq;

    char nome_arq[SMAX],str_off[5]=".OFF";

    cout << "Insira o nome para o arquivo." << endl;
    cin.getline(nome_arq,SMAX);
    strcat(nome_arq,str_off);
    arq.open(nome_arq);
}



