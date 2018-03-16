#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

/* Tipo: Funcion�rio */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Tipo: Funcion�rio */
struct funcionario {
	char *nome;
	int idade;
	int matricula;
};

//typedef struct funcionario Funcionario; //Redeclarado no Funcionario.c

/*Tipo criado para armazenar informa��es de Funcion�rios de uma empresa.
 O Campo Matr�cula deve ser usado como Chave para a identifica��o �nica
 de um Funcion�rio no conjunto*/
typedef struct funcionario Funcionario;

/***********************************************************/
/******************* Fun��es exportadas *******************/

/* Fun��o cria - Aloca e retorna um Funcion�rio */
Funcionario* cria_Funcionario(void);

/* Fun��o atualiza nome - Insere um Novo nome para um Funcion�rio */
void atualiza_nome_Func(Funcionario* func, char *nome);

/* Fun��o atualiza matricula - Insere uma Nova matr�cula para um Funcion�rio */
void atualiza_mat_Func(Funcionario* func, int val);

/* Fun��o atualiza idade - Atualiza a idade do Funcion�rio */
void atualiza_idade_Func(Funcionario* func, int val);

/* Fun��o libera - Libera um Funcion�rio da mem�ria */
void libera_Func(Funcionario* func);

/* Fun��o acessa nome - Retorna o nome do funcion�rio
  Retorno : String  */
char* acessa_nome_Func(Funcionario* func);

/* Fun��o acessa matricula - Retorna a matr�cula do Funcion�rio
   Retorno: int */
int acessa_mat_Func(Funcionario* func);

/* Fun��o acessa idade - Retorna a idade do Funcion�rio
  Retorno: int*/
int acessa_idade_Func(Funcionario* func);

/* Fun��o imprime - Imprime Informa��es do Funcion�rio
  Retorno: int*/
void imprime_Func(Funcionario* func);

/* Preenche Funcionario - recebe os dados do usu�rio e preenche um Funcionario
  Retorno: int*/
int preenche_Func(Funcionario* func);

#endif // FUNCIONARIO_H_INCLUDED