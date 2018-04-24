#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class ImagemPPM {

    private:

      string num;
      int altura;
      int largura;
      int Total;
      string ppmOriginal;
      string ppmCopia;
      ifstream ler;
      ofstream escrever;

    void lerPixelPPM();
    void lerCabecalhoPPM();

    public:

      ImagemPPM(string imagemPPMFile);
      ~ImagemPPM();

    unsigned char pixel[1000][1000][4];

        string getNum();
          void setNum(string num);

        int getAltura();
          void setAltura(int altura);

        int getLargura();
          void setLargura(int largura);

        int getTotal();
          void setTotal(int Total);
};

class ImagemPGM {

    private:

      string num;
      int altura;
      int largura;
      int Total;
      string pgmOriginal;
      string pgmCopia;
      ifstream ler;
      ofstream escrever;

    void lerPixelPGM();
    void lerCabecalhoPGM();

    public:

      ImagemPGM(string imagemPGMFile);
      ~ImagemPGM();

    unsigned char pixel[1000][1000][4];

        string getNum();
          void setNum(string num);

        int getAltura();
          void setAltura(int altura);

        int getLargura();
          void setLargura(int largura);

        int getTotal();
          void setTotal(int Total);
};
#endif