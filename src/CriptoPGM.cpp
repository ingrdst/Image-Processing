#include "../inc/CriptoPGM.hpp"
#include <iostream>

using namespace std;

CriptoPGM::CriptoPGM(){
}CriptoPGM::~CriptoPGM(){
}
void CriptoPGM::aplicarCriptoPGM(ImagemPGM & image){
  int x;
  int z;
  ImagemPGM *imagem = &image;
  for(x=0; x <imagem->getLargura(); x++){
    for(z=0; z <imagem->getAltura(); z++){
      imagem->pixel[x][z][1]= imagem->getTotal() - imagem->pixel[x][z][1];
      imagem->pixel[x][z][2]= imagem->getTotal() - imagem->pixel[x][z][2];
      imagem->pixel[x][z][3]= imagem->getTotal() - imagem->pixel[x][z][3];
    }
  }
}

