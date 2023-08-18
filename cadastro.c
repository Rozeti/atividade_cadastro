#include <stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
  
    //declarando as variáveis
    int idade;
    float mensalidade;
    char nome[30]; 
    char matricula[11];
    char endereco[60];
    char curso[35];
    char periodo[15];
    char disciplinas[100];

    printf("------> Cadastro de Usuario <------\n");

    printf("\n->Digite seu nome: ");
    fgets(nome, 30, stdin);
    
    
    printf("\n->Digite sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);
    

    printf("\n->Digite sua matricula: ");
    fgets(matricula, 11, stdin);
    fflush(stdin);

    printf("\n->Digite seu endereco: ");
    fgets(endereco, 60, stdin);
    

    printf("\n->Digite seu curso: ");
    fgets(curso, 35, stdin);
   
    

    printf("\n->Digite seu periodo: ");
    fgets(periodo, 15, stdin);
    

    printf("\n->Digite a disciplina: ");
    fgets(disciplinas, 100, stdin);
    

    printf("\n->Digite sua mensalidade: ");
    scanf("%f", &mensalidade);

  printf("\n------------------------------\n");
  printf("\n--------------->Registro<---------------\n");

    printf("\n->Nome: %s", nome);

    printf("\n->Idade: %d anos\n", idade);

    printf("\n->Matricula: %s\n", matricula);

    printf("\n->Endereco: %s", endereco);

    printf("\n->Curso: %s", curso);

    printf("\n->Periodo: %s", periodo);

    printf("\n->Disciplina: %s", disciplinas);

    printf("\n->Mensalidade: R$ %.2f\n", mensalidade);
}
