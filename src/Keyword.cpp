#include "../inc/Keyword.hpp"
#include "../inc/Imagem.hpp"
#include "../inc/CriptoPPM.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

Keyword::Keyword(){
}
Keyword::~Keyword(){
}

void Keyword::aplicarCriptoPPM(ImagemPPM &img){
	ImagemPPM* imagemppm = &img;

    //Valores RGB
    char px=0;
    int x,z;
    int r=0,g=0,b=0;
    int f=0,i=0,m=0;
    int rgb=0;

    unsigned char pixel[1000][1000][4];
    //Loop para ler a imagem
    for(x= 0; x < imagemppm->getLargura(); ++x){
       for(z= 0; z < imagemppm->getAltura(); ++z){
          pixel[x][z][1]=(int) px;
          r+=pixel[x][z][1];
          pixel[x][z][2]=(int) px;
          g+=pixel[x][z][2];
          pixel[x][z][3]=(int) px;
          b+=pixel[x][z][3];
        }
    }

    //Ultimo digito de cada numero
    f = r % 10;
    i = g % 10;
    m = b % 10;

    //Valor final
    rgb= f+i+m;

    //Conversao Inteiro para String
    string key=""; 
    while(rgb >= 1 && rgb <= 26)
    {
        int q=rgb%10;
        rgb/=10;
        char k='0';
        k=k+q;
        key=k+key;    //"append"
    }
    
    /*
    //Caracteres que formarao a string
    char rgb[50];
    int i=0,j=0;
    char key[50];
    while(rgb[i]!='\0'){
		key[j]=rgb[i];
		j++;
		i++;
	}
	key[j]='\0';
    */

    string encoded = "";
    bool arr[26] = {0};
    int y= sizeof(key);

    for(x= 0; x < imagemppm->getLargura(); ++x){
        for(z= 0; z < imagemppm->getAltura(); ++z){
            for (int i=0; i<y; i++){

                if(key[i] >= 'A' && key[i] <= 'Z'){
                //Checar se o caractere sera inserido antes
                    if (arr[key[i]-65] == 0){
                        encoded += key[i];
                        arr[key[i]-65] = 1;
                    }
                    }else if (key[i] >= 'a' && key[i] <= 'z'){
                    if (arr[key[i]-97] == 0){
                        encoded += key[i] - 32;
                        arr[key[i]-97] = 1;
                    }
                }
            }   
        }
    }

    //Caracteres restantes
    for(x= 0; x < imagemppm->getLargura(); ++x){
      for(z= 0; z < imagemppm->getAltura(); ++z){
            for (int i=0; i<26; i++){
                if(arr[i] == 0){
                    arr[i]=1;
                    encoded += char(i + 65);
                }   
            }
        }
    
    }

    //Cifrar mensagem
    string msg;
    string cipher="";
    int w= sizeof(msg);

    for(x= 0; x < imagemppm->getLargura(); ++x){
        for(z= 0; z < imagemppm->getAltura(); ++z){
            for (int i=0; i<w; i++){
                if (msg[i] >='a' && msg[i] <='z'){
                    int pos = msg[i] - 97;
                    cipher += encoded[pos];
                    }
                else if (msg[i] >='A' && msg[i] <='Z'){
                    int pos = msg[i] - 65;
                    cipher += encoded[pos];
                }else{
                    cipher += msg[i];
                }
            }
        }
    }
    
    cout << endl;
    cout << "Mensagem: " << msg << endl;
}

