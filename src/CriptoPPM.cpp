#include "../inc/CriptoPPM.hpp"
#include <iostream>

using namespace std;

CriptoPPM::CriptoPPM(){
}CriptoPPM::~CriptoPPM(){
}
void CriptoPPM::aplicarCriptoPPM(ImagemPPM & image){
  int x;
  int z;
  ImagemPPM *imagem = &image;
  for(x=0; x <imagem->getLargura(); x++){
    for(z=0; z <imagem->getAltura(); z++){
      imagem->pixel[x][z][1]= imagem->getTotal() - imagem->pixel[x][z][1];
      imagem->pixel[x][z][2]= imagem->getTotal() - imagem->pixel[x][z][2];
      imagem->pixel[x][z][3]= imagem->getTotal() - imagem->pixel[x][z][3];
    }
  }
}

