#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_produtos {
  char nomeP;
  float valor;
  int qtd;
};

void cadastrar(struct dados_produtos prod){
  printf("NOME DO PRODUTO: \n");
  gets(prod.nomeP);
  printf("VALOR DO PRODUTO: \n");
  scanf("%f",&prod.valor);
  printf("ESTOQUE DO PRODUTO: \n");
  scanf("%d",&prod.qtd);
}

int main (){
  
  struct dados_produtos prod;
  int opcao;
  
  printf("\n==========MENU=========\n");
  printf("1 || REALIZAR UMA COMPRA");
  printf("2 || CONSULTAR ESTOQUE");
  printf("3 || SAIR DO PROGRAMA");
  printf("===========================\n");
  printf("Digite uma opcao: ");
  printf("%d",&opcao);

  switch (opcao)
  {
    case 1:
    cadastrar(); 
      break;
    case 2: 
          

  }

  
  return 0;
}