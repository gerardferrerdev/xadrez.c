#include <stdio.h>

void torre(){
  for (int i = 0; i < 4; ++i){
    printf("Direita\n");
  }
}

void bispo(){
  for(int i = 0; i < 4; ++i){
    printf("Cima\nDireita\n");
  }
}

void rainha(){
  for(int i = 0; i < 4; ++i){
    printf("Esquerda\n");
  }
}

void cavalo(){
  for(int i = 0; i < 2; ++i){
    printf("Cima\n");
      if( i == 1){
        printf("Direita\n");
      }
  }
}

int main() {
  printf("\n\nTorre:\n");
    torre();
  printf("\n\nBispo:\n");
    bispo();
  printf("\n\nRainha:\n");
    rainha();
  printf("\n\nCavalo:\n");
    cavalo();
  return 0;
}