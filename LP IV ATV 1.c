#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_contatos{
  char nome[200];
  char telefone[200];
  char email[200];
};

void agendaContatos(struct dados_contatos *contatos, char *contato){
  int i;
  for(i = 0;i < 3 ; i++){
    if (strcmp(contatos[i].nome,contato) == 0){
      printf("Nome: %s\n",contatos[i].nome);
      printf("Telefone: %s\n",contatos[i].telefone);
      printf("Email: %s\n",contatos[i].email);
      return;
    }
  }
  printf("Contato não encontrado. \n");
}

int main(){
  setlocale(LC_ALL," ");
  
  int i;
  char contato[200];
  struct dados_contatos contatos[3];


  for(i=0;i<3;i++){
    printf("Digite o nome do %d° Contato: \n",i+1);
    gets(contatos[i].nome);
    fflush(stdin);
    printf("Digite o Telefone do %d° Contato: \n",i+1);
    gets(contatos[i].telefone);
    fflush(stdin);
    printf("Digite o Email do %d° Contato: \n",i+1);
    gets(contatos[i].email);
    fflush(stdin);
  }
    
    system("clear || cls");
    printf("-----------------------------");
    printf("Digite o nome do contato que deseja encontrar: ");
    gets(contato);
    agendaContatos(contatos,contato); 

  
    
  return 0;
}
