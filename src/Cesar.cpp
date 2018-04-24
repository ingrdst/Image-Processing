#include "../inc/Cesar.hpp"
#include "../inc/Imagem.hpp"
#include "../inc/CriptoPGM.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

Cesar::Cesar(){
}Cesar::~Cesar(){
}

void Cesar::aplicarCriptoPGM(ImagemPGM & img){
	ImagemPGM* imagempgm = &img;


    //Valores RGB
    int x,z;
	char rgb[50];
    int i=0,j=0;
    string key;
    
    //Percorre imagem
    for(x= 0; x < imagempgm->getLargura(); ++x){
       for(z= 0; z < imagempgm->getAltura(); ++z){
        while(rgb[i]!='\0'){
		key[j]=rgb[i];
		j++;
		i++;
		}
		key[j]='\0';
        }
    }
   

	char buf;
	int cesar;

	cout << "Valor= ";
	cin >> cesar;

    //Cifra
    for(x= 0; x < imagempgm->getLargura(); ++x){
      for(z= 0; z < imagempgm->getAltura(); ++z){
		if(buf>='A'&&buf<='Z'){
           	buf-='A';
			buf+=26-cesar;
			buf%=26;
			buf+='a';
           	}
    	}
    }
	
	cout << "Mensagem: " << buf << endl;
}
