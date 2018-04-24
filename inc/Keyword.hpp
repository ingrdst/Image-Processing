#ifndef KEYWORD_HPP
#define KEYWORD_HPP
#include "Imagem.hpp"
#include "CriptoPPM.hpp"

class Keyword : public CriptoPPM{

  public:
  Keyword();
  ~Keyword();

  void aplicarCriptoPPM(ImagemPPM &imagemppm);

};

#endif