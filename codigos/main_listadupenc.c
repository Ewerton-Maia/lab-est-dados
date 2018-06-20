/*****************************************************************************
 * Instituto Federal de Educação Ciência e Tecnologia da Paraíba			 
 * Campus Campina Grande													 
 * Curso Superior em Engenharia da Computação								 
 * Professor: Cesar Vasconcelos												 
 * 																			 
 * Copyright - Cesar Vasconcelos											 
 * Este marerial foi elaborado apenas para ser utilizado pelos alunos da 	 
 * disciplina Estruturas de Dados, do curso de Eng. da Computação do IFPB.	 
 * 																			 
 * Nenhuma parte deste material pode ser reproduzida ou transmitida			 
 * de qualquer modo ou por qualquer meio sem prévia autorização do 			 
 * autor e sem lhe ser dado o devido crédito.								 
 * **************************************************************************/

#include "listadupenc.h"
#include <stdio.h>

int main (void) {
	TListaDupEnc lista;

    criarLista( &lista );

    if( listaVazia( lista ) ) printf( "Esta vazia!" );

    inserirElemento( &lista, 1, 10 );
    inserirElemento( &lista, 2, 20 );
    inserirElemento( &lista, 3, 30 );
    inserirElemento( &lista, 4, 40 );

    printf( "\nQtd elementos na memoria: %d", tamanhoLista( lista ) );

    // e se quem utiliza a biblioteca comete equívocos?
    printf( "\n%s", inserirElemento( &lista, 5000, 50 ) ? 
	    	        "Sucesso" : "Erro na insercao!" );

    imprimir( lista );  printf( "\n" );

    printf( "\nPosicao do elemento 10: %d", posicaoDoElemento( lista, 10 ) );
    printf( "\nPosicao do elemento 20: %d", posicaoDoElemento( lista, 20 ) );
    printf( "\nPosicao do elemento 30: %d", posicaoDoElemento( lista, 30 ) );
    printf( "\nPosicao do elemento 40: %d", posicaoDoElemento( lista, 40 ) );

    int retorno = 0;
    elementoNaPosicao( lista, 1, &retorno ) ; 
		printf( "\nElemento na posicao 1: %d", retorno );
    elementoNaPosicao( lista, 2, &retorno ) ;
		printf( "\nElemento na posicao 2: %d", retorno );
    elementoNaPosicao( lista, 3, &retorno ) ;
		printf( "\nElemento na posicao 3: %d", retorno );
    elementoNaPosicao( lista, 4, &retorno ) ;
		printf( "\nElemento na posicao 4: %d", retorno );
 
    removerElemento( &lista, 2, &retorno ); //20
    printf( "\n\nElemento removido: %d", retorno );
    printf( "\nQtd elementos na memoria: %d", tamanhoLista( lista ) );

    imprimir( lista );
    
    removerElemento( &lista, 3, &retorno );
    printf( "\nElemento removido: %d", retorno ); // 40

    printf( "\nQtd elementos na memoria: %d", tamanhoLista( lista ) ); 
  	imprimir( lista );

    removerElemento( &lista, 1, &retorno );
    printf( "\nElemento removido: %d", retorno ); //10

    printf( "\nQtd elementos na memoria: %d", tamanhoLista( lista ) );
	  imprimir( lista );

    removerElemento( &lista, 1, &retorno );
    printf( "\nElemento removido: %d", retorno ); //30

    printf( "\nQtd elementos na memoria: %d\n", tamanhoLista( lista ) );

	  return 0;
}
