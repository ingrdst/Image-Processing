#ifndef CESAR_HPP
#define CESAR_HPP
#include "Imagem.hpp"
#include "CriptoPGM.hpp"

class Cesar : public CriptoPGM{

	public: 
    Cesar();
   ~Cesar();

	void aplicarCriptoPGM(ImagemPGM &imagempgm);
};

#endif