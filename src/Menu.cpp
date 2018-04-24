#include "../inc/Imagem.hpp"
#include "../inc/Cesar.hpp"
#include "../inc/Keyword.hpp"
#include <cstdlib> 
#include <iostream>
#include <fstream>
#include <string>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

string imagemPPMFile;
ImagemPPM* imagemppm;

string imagemPGMFile;
ImagemPGM* imagempgm;

int main(){
  system(CLEAR);
  void aplicarCesar();
  void aplicarKeyword();
  int menu;

  cout << "\t\v    Processamento de imagens .PPM e .PGM    \v\t" << endl;
  cout << "\n O arquivo (.ppm/.pgm) deve estar na pasta /doc;"<< endl;
  cout << endl;
  cout << endl;
  cout << "\tEscolha o tipo de manipulacao de imagem desejado: \n\n" <<endl;
  cout << "1.Tipo PPM: Keyword Cypher (Imagem Colorida);\n\t"<<endl;
  cout << "2.Tipo PGM: Cesar Cypher (Imagem Tons de Cinza);\n\t"<<endl;
  cout << "Digite a opcao desejada: ";
  cin >> menu;

        switch (menu) {
          case 1:{
              system(CLEAR);
              cout << "\t\v    1. Keyword Cypher (.ppm)    \v\t\n" << endl;
              cout << "\nDigite o nome do arquivo existente (.ppm): ";
              cin >> imagemPPMFile;
              imagemppm = new ImagemPPM(imagemPPMFile);
                  aplicarKeyword();
                  delete (imagemppm);
            break;
          }
          case 2:{
              system(CLEAR);
              cout << "\t\v    2. Cesar Cypher (.pgm)    \v\t\n" << endl;
              cout << "\nDigite o nome do arquivo existente (.pgm): ";
              cin >> imagemPGMFile;
              imagempgm = new ImagemPGM(imagemPGMFile);
                  aplicarCesar();
                  delete (imagempgm);
            break;
          }

        default:
          cout << "\aValor digitado foi invalido!" << endl;
            break;
  }
    return 0;

}

void aplicarKeyword(){

  Keyword key;
  key.aplicarCriptoPPM(*imagemppm);
  
}


void aplicarCesar(){

  Cesar csr;
 	csr.aplicarCriptoPGM(*imagempgm);

}

