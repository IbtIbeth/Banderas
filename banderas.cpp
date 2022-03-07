#include <math.h>
#include "memoria.h"

char ** generarBandera(int n){
  int nbanderas_nuevas = pow(2,n);
  char ** banderas_nuevas = reservarMemoria(nbanderas_nuevas,n);


  if (banderas_nuevas != nullptr){
    if (n ==1){
      banderas_nuevas[0][0] = 'R';
      banderas_nuevas[1][0] = 'A';
    }else{
      int nbanderas = pow(2,n-1);
      char ** banderas = generarBandera1(n-1)
      if (banderas != nullptr){
        for (int j=0; j< n-1; j++){
          banderas_nuevas[2*i][j] = banderas[i][j];
          banderas_nuevas[2*i+1][j] = banderas[i][j];
        }
        banderas_nuevas[2*i][n-1] = 'R';
        banderas_nuevas[2*i+1][n-1] = 'A';
      }
    }
    liberarMemoria(banderas,nbanderas)
  }

}
return banderas_nuevas;
