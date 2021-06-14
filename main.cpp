#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    int x1, x2, y1, y2, x, y;

    cout << "Entre com o ponto X1 que determina o retângulo:  " << endl;
    cin >> x1;

    cout << "Entre com o ponto Y1 que determina o retângulo:  " << endl;
    cin >> y1;

    cout << "Entre com o ponto X2 que determina o retângulo:  " << endl;
    cin >> x2;

    cout << "Entre com o ponto Y2 que determina o retângulo:  " << endl;
    cin >> y2;

    cout << "Entre com o ponto X para testar se pertence ao Retângulo: " << endl;
    cin >> x;

    cout << "Entre com o ponto Y para testar se pertence ao Retângulo: " << endl;
    cin >> y;

    if(x == x1 || x == x2){
      if(y >= y1 && y <= y2){
        cout << "O ponto esta na borda do retângulo" << endl;
      }else{
        cout << "O ponto esta fora do Retângulo." << endl;
      }
    }else if(y == y1 || y == y2){
      if(x >= x1 && x <= x2){
        cout << "O ponto esta na borda do retângulo" << endl;
      }else{
        cout << "O ponto esta fora do Retângulo." << endl;
      }
    }else if((x > x1 && x< x2) && (y > y1 && y < y2)){
      cout << "O ponto esta dentro do retanângulo." << endl;
    }else{
      cout << "O ponto esta fora do Retângulo." << endl;
    }

    return 0;
}