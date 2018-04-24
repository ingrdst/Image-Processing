#include "../inc/Cesar.hpp"
#include "../inc/Imagem.hpp"
#include "../inc/CriptoPGM.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Cesar::Cesar(){
}Cesar::~Cesar(){
}

void Cesar::aplicarCriptoPGM(ImagemPGM & img){
	ImagemPGM* imagempgm = &img;
    int  key=0;
	char buf;
    int x,z;

    //Cifra
    for(x= 0; x < imagempgm->getLargura(); ++x){
      for(z= 0; z < imagempgm->getAltura(); ++z){
		if(buf>='A'&&buf<='Z'){
           	buf-='A';
			buf+=26-key;
			buf%=26;
			buf+='a';
           	}
    	}
    }
	
	cout << "Mensagem: " << buf << endl;
}
