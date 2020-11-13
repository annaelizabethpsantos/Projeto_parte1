#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int MAX = 30;
const int SMAX = 20;

Sculptor::Sculptor(int _nx, int _ny, int _nz){

Sculptor ***m;
int i,j,k;

for(i=0;i<_nx;i++){
    for(j=0;j<_ny;j++){                                            //Alocar a matriz 3D (Voxel);
        for(k=0;k<_nz;k++){
             m[i][j][k].nx=i;
               m[i][j][k].ny=j;
                 m[i][j][k].nz=k;
        }
    }
}

}
// Construtor com argumentos - Recebe as dimensões do Voxel e as coordenadas do mesmo.

void Sculptor::setColor(float r, float g, float b, float alpha){
    int i,j,k;
    Voxel ***m;
    for(i=0;i<nx;i++){
        for(j=0;j<ny;j++){
            for(k=0;k<nz;k++){
               m[i][j][k].r=r;
               m[i][j][k].g=g;
               m[i][j][k].b=b;
               m[i][j][k].a=alpha;  // Chamada da função da classe Sculptor,inserir cor na matriz 3D.
            }
        }
    }
}

void Sculptor::putVoxel(int x, int y, int z)
{
    int i,j,k;
    Voxel ***m;
    for(i=0;i<nx;i++){
            for(j=0;j<ny;j++){
                    for(k=0;k<nz;k++){
                    if(i == x, j == y ; k == z){
                        m[i][j][k].isOn = true;
                    }
            }
                    }
    }
}

void Sculptor::cutVoxel(int x, int y, int z)
{
    int i,j,k;
    Voxel ***m;
    for(i=0;i<nx;i++){
            for(j=0;j<ny;j++){
                    for(k=0;k<nz;k++){
                    if(i == x, j == y ; k == z){
                       m[i][j][k].isOn = false;
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
                        if()
                        m[i][j][k].isOn = false;
                    }
            }
    }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
Voxel ***m;
int i,j,k;
for(i=-radius;i<=radius;i++){
        for(j=-radius;j<=radius;j++){
                for(k=-radius;k<=radius;k++){
                    if()
                    m[i][j][k].isOn = false;
                }
        }
}
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
int i,j,k;
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
int i,j,k;
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



