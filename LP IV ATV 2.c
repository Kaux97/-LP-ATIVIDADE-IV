#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



#define tam 2
struct dados_aluno{
  char aluno[200];
  char data[200];
  float nota1;
  float nota2;
  float media;
};

float calcularMedia(struct dados_aluno *dados){
  float soma = 0;
  int i;
  for(i = 0;i < tam;i++){
    soma = dados[i].nota1 + dados[i].nota2;
    dados[i].media = soma /(float) 2;
    soma = 0;
  }
  return dados[i].media;
}

void resultado(struct dados_aluno *dados, float media){
  if(media >= 7){
    printf("APROVADO!");
  }else{
    printf("REPROVADO!");
  }

}

int main (){
  setlocale(LC_ALL,"portuguese");
  
  int i;
  struct dados_aluno dados[tam];

for(i=0;i<tam;i++){
  printf("Digite o Nome do %d° Aluno: ",i +1);
  gets(dados[i].aluno);
  fflush(stdin);
  printf("Digite a Data de Nascimento do %d° Aluno: ",i +1);
  gets(dados[i].data);
  printf("\nDigite a %d° nota: ",i+1);
  scanf("%f",&dados[i].nota1);
  printf("\nDigite a %d° nota: ",i+1);
  scanf("%f",&dados[i].nota1);
  fflush(stdin);
  system("clear || cls");
}


dados[i].media = calcularMedia(dados);
for(i=0;i<tam;i++){
  printf("Nome do %d° aluno: %s\n",i+1,dados[i].aluno[i]);
  printf("Data de Nascimento do %d° aluno: %s\n",i+1,dados[i].data);
  printf("Media: %.1f\n", dados[i].media);

  if (dados[i].media >= 7)
    {
        printf("APROVADO!\n");
    } else 
    {
        printf("REPROVADO!\n");
    }
  }




  return 0;
}