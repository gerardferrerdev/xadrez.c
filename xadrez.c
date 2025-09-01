#include <stdio.h>

//torre horizontal ou vertical 5 casas para a direita
//bispo 5 casas para direita na diagonal
//rainha 8 casas para a esquerda
int main () {
    int torre = 1; //while
    int bispo = 5; //for
    int rainha = 1;// do while

    printf("Torre:\n");
    while(torre <= 5){
      printf("uma casa para a direita\n");
      ++torre;
    }
    
    printf("\n\n------------------------------------------------\n\n");
    
    printf("Bispo:\n");
    for(int i = 0;i != bispo;++i){
      printf("uma casa para cima e uma para a direita\n");
    }
    
    printf("\n\n------------------------------------------------\n\n");

    printf("Rainha:\n");
    do{

      printf("Uma casa para a esquerda\n");
      ++rainha;
    }while(rainha != 5);

  return 0;
}