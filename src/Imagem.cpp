#include <iostream>
#include <string>
#include <fstream>
#include "../inc/Imagem.hpp"

using namespace std;

//TIPO PPM
ImagemPPM::ImagemPPM(string imagemPPMFile){
    ppmOriginal = "doc/"+ imagemPPMFile+".ppm";
    ler.open(ppmOriginal.c_str());

    while(!ler.is_open()){
      cout << "O arquivo não foi encontrado. ";
      cout << "Por favor entre com o arquivo '.ppm' valido";
      cout << endl;
      cout << "Digite um nome valido: ";
      cin >> ppmOriginal;

      ppmOriginal= "doc/"+ppmOriginal+".ppm";
      ler.open(ppmOriginal.c_str());

    } lerCabecalhoPPM();
        while (num !="P3" && num !="P6"){
          cout << "\a\aImagem do tipo incorreto: ";
          cin >> ppmOriginal;

          ppmOriginal = "doc/"+ ppmOriginal+ ".ppm";
          ler.open(ppmOriginal.c_str());
    while(ler.is_open()){
      cout<< "Imagem de tipo incorreto, entre com um valido: "<< endl;
      cin >> ppmOriginal; ppmOriginal="doc/" + ppmOriginal+ ".ppm";
      ler.open(ppmOriginal.c_str());
    }
    
    lerCabecalhoPPM();

  }
  lerPixelPPM();
}

void ImagemPPM::lerPixelPPM(){
  char px;
  int x;
  int z;

    for(x=0; x< largura; x++){
        for(z=0; z< altura; z++){
          ler.get(px);
          pixel[x][z][1]=(int) px;
          ler.get(px);
          pixel[x][z][2]=(int) px;
          ler.get(px);
          pixel[x][z][3]=(int) px;
        }
    }
}

void ImagemPPM::lerCabecalhoPPM(){
  string cabecalho;
  int informacoes=0;
  ifstream aux(ppmOriginal.c_str());
  getline(ler, cabecalho);
  while(cabecalho != "255"){
    if(cabecalho[0] !='#'){
      if(informacoes ==0) aux>>num;
      if (informacoes ==1) {aux >> altura;aux >> largura;}
        informacoes++;

      }

    getline(aux, cabecalho);
    getline (ler, cabecalho);
}
Total= 255;
}

ImagemPPM::~ImagemPPM(){}
string ImagemPPM::getNum(){
    return num;
  }
void ImagemPPM::setNum(string num){
  this-> num = num;
  }

int ImagemPPM::getAltura(){
    return altura;
  }
void ImagemPPM::setAltura(int altura){
  this-> altura = altura;
  }

int ImagemPPM::getLargura(){
    return largura;
  }
void ImagemPPM::setLargura(int largura){
  this-> largura = largura;
  }

int ImagemPPM::getTotal(){
    return Total;
  }
void ImagemPPM::setTotal(int Total){
  this-> Total = Total;
  }


//Tipo PGM
ImagemPGM::ImagemPGM(string imagemPGMFile){
    pgmOriginal = "doc/"+ imagemPGMFile+".pgm";
    ler.open(pgmOriginal.c_str());

    while(!ler.is_open()){
      cout << "O arquivo não foi encontrado. ";
      cout << "Por favor entre com o arquivo '.pgm' valido";
      cout << endl;
      cout << "Digite um nome valido: ";
      cin >> pgmOriginal;

      pgmOriginal= "doc/"+pgmOriginal+".pgm";
      ler.open(pgmOriginal.c_str());

    } lerCabecalhoPGM();
        while (num !="P2" && num !="P5"){
          cout << "\a\aImagem do tipo incorreto: ";
          cin >> pgmOriginal;

          pgmOriginal = "doc/"+ pgmOriginal+ ".pgm";
          ler.open(pgmOriginal.c_str());
    while(ler.is_open()){
      cout<< "Imagem de tipo incorreto, entre com um valido: "<< endl;
      cin >> pgmOriginal; pgmOriginal="doc/" + pgmOriginal+ ".pgm";
      ler.open(pgmOriginal.c_str());
}
            lerCabecalhoPGM();

        }lerPixelPGM();}

void ImagemPGM::lerPixelPGM(){
  char px;
  int x;
  int z;

    for(x=0; x< largura; x++){
        for(z=0; z< altura; z++){
          ler.get(px);
          pixel[x][z][1]=(int) px;
          ler.get(px);
          pixel[x][z][2]=(int) px;
          ler.get(px);
          pixel[x][z][3]=(int) px;
        }
    }
}

void ImagemPGM::lerCabecalhoPGM(){
  string cabecalho;
  int informacoes=0;
  ifstream aux(pgmOriginal.c_str());
  getline(ler, cabecalho);
  while(cabecalho != "255"){
    if(cabecalho[0] !='#'){
      if(informacoes ==0) aux>>num;
      if (informacoes ==1) {aux >> altura;aux >> largura;}
        informacoes++;

      }

    getline(aux, cabecalho);
    getline (ler, cabecalho);
}
Total= 255;
}

ImagemPGM::~ImagemPGM(){}
string ImagemPGM::getNum(){
    return num;
  }
void ImagemPGM::setNum(string num){
  this-> num = num;
  }

int ImagemPGM::getAltura(){
    return altura;
  }
void ImagemPGM::setAltura(int altura){
  this-> altura = altura;
  }

int ImagemPGM::getLargura(){
    return largura;
  }
void ImagemPGM::setLargura(int largura){
  this-> largura = largura;
  }

int ImagemPGM::getTotal(){
    return Total;
  }
void ImagemPGM::setTotal(int Total){
  this-> Total = Total;
  }