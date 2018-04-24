#ifndef CRIPTOPGM_HPP
#define CRIPTOPGM_HPP
#include "Imagem.hpp"

using namespace std;

class CriptoPGM{

  public:
    CriptoPGM();
    ~CriptoPGM();

    void aplicarCriptoPGM(ImagemPGM & imagempgm);

};

#endif