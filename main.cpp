#


include <new>

char ** reservarMemoria(int filas, int columnas){
  int i;

  char **arreglo = new (std::nothrow) char*[filas];
  if (arreglo != nullptr){
    for (i=0; i<filas; i++){
      *(arreglo + i) = new(std::nothrow) char[c
      if(*(arreglo + i) == nullptr)
        return nullptr;
    }
    return arreglo;
  }else{
    return nullptr;
  }
}

void liberarMemoria(chat ** arreglo, int filas){
  if(arreglo != nullptr){
    for (int i = 0; i<filas; i++)
      if (*(arreglo + i) != nullptr)
        delete [] *(arreglo + i);
  }
}
