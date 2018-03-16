/*Programa Cliente para testar os TADs criados
na Disciplina Estrutura de Dados*/

<<<<<<< HEAD
/*Bibliotecas da Linguagem utilizadas pelo cliente*/
#include <stdio.h>
#include <stdlib.h>

/*Bibliotecas criadas no programa (TADs)*/
#include "Funcionario.h"
#include "ListaFuncionario.h"
//#include "ListaFuncionarioEstatica.h"

/*Fun��o que imprime o menu principal do programa*/
void imprime_menu(){

  printf("\n--------------- M E N U ---------------\n");
  printf("---------------------------------------\n\n");
  printf("     1 - Adiciona Funcionario\n");
  printf("     2 - Remove Funcionario \n");
  printf("     3 - Busca Funcionario\n");
  printf("     4 - Imprime Lista de Funcionarios\n");
  printf("     5 - Deleta Lista\n");
  printf("---------------------------------------\n\n");
}


int main(int argc, char *argv[]) {
	
	/* int opcao = 0;
	printf("Para Lista Est�tica digite 1 ");
	printf("Para Lista Din�mica aperte Enter ");
	printf("Voc� deseja uma Lista Din�mica ou Est�tica? ");
	scanf(opcao);

	if (opcao == 0) { */
		ListaFuncionario* list = lista_cria();
	/*}
	else {
		int tamanho = 10;
		printf("Para o tamanho padr�o (10) aperte enter");
		printf("Digite o tamanho da lista: ");
		scanf(tamanho);
		ListaFuncionarioEstatica * list = lista_cria(tamanho);
	} */
=======
#include "Cliente.h"
>>>>>>> 40c3c91489d0cb0b0e1b4779abe0388daa061f59

int principal() {
    ListaFuncionario* list = lista_cria();
	do{

		int valor=0;
		imprime_menu("DINAMICA"); // mostra o menu sempre depois de uma a��o
		scanf ("%d",&valor);

		switch ( valor ) {
            case 0:
                return 0;

		     case 1 :   //Adiciona um Funcionario
		       {
		       	Funcionario* f = cria_Funcionario();
			       	if(f!=NULL){

					    imprime_Func(f);
				       	pause();//system("pause"); //espera teclar
				       	cls();//system("cls"); //limpa a tela
				       	list = lista_insere_ordenado(list,f);
			       	    printf("Funcionario adicionado com Sucesso!!\n");
			       	    pause();//system("pause"); //espera teclar
				       	cls();//system("cls"); //limpa a tela

			       }else printf("Memoria insuficiente!!\n");
			   }
		     break;

		     case 2 :    //Remove Funcion�rio
		       {
		       	int mat=0;
		        printf("Digite a matricula do Funcionario\n");
				scanf ("%d",&mat);
				list = lista_remove(list, mat);
				pause();//system("pause"); //espera teclar
                cls();//system("cls"); //limpa a tela
			   }
		     break;

		     case 3 :   //Busca Funcionario
		        {
		        int mat=0;
		        printf("Digite a matricula do Funcionario\n");
				scanf ("%d",&mat);
				Funcionario* f_aux = busca(list,mat);
				if(f_aux!=NULL){

					imprime_Func(f_aux);
					pause();//system("pause"); //espera teclar
                    cls();//system("cls"); //limpa a tela

		    	}
				else {
						printf("Nao foi possivel retornar Funcionario\n");
						pause();//system("pause"); //espera teclar
				       	cls();//system("cls"); //limpa a tela

					}
		         break;
	     	   }
			 case 4 :    //Imprime a Lista de Funcionarios
		    {
		        printf("\n=========== E M P R E S A ================\n");
                printf("==========================================\n\n");
		      	lista_imprime(list);
		      	printf("==========================================\n\n");
		      	pause();//system("pause"); //espera teclar
                cls();//system("cls"); //limpa a tela
			  }
		     break;
		     case 5 :  //Deleta a Lista
		      {
		      	/*List receber� NULL ap�s libera��o do espa�o de mem�ria
				  para o programa manter uma referencia da Lista*/
		      	list = lista_libera(list);
			  }

		     break;

		     default :
		     	{
				   printf ("Valor invalido!\n\n");
				   pause();//system("pause"); //espera teclar
                   cls();//system("cls"); //limpa a tela
		     	}
        }

	}while(1); //Loop infinito

 }


