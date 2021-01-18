%{
  #include<stdio.h>
%}
/*
Practica 4
	reporte:
 	caratula
	introduccion:Descripcion de proyecto por default
	Desarrollo
		-Metodologia: 	1.Ejemplificar el lenguaje
			      	2.CLASES LEXICAS	
			    	3.Escribri las expresiones para cada clase
				4.Codificar en LEX (lexico.l)
				5.Pruebas(compilar, introducir, programas)
	Conslusiones
	Referencias (manual de flex origen del lenguaje, etc)

	programa:
		lexico.l
		makefile
		main.c

compilar
	felx lexico.l
	gcc -c lex.yy.c

vi main.c
-contenido
	archivo int main(void){
		yylex();
		return 0;
	}
	
	gcc main.o lex.yy.o
	gcc main.o lex.yy.o -lfl
	./a.out


hacer archuvo makefile
	lex.yy.c: lexico.l
		flex lexico.l
main.o: main.c
	gcc -c main.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

a.out: main.o lex.yy.o
	gcc main.o lex.yy.o -lfl

clean:
	rm -f a.out main.o lex.yy.o lex.yy.c

run: a.out
	./a.out

corre con make clean
*/



%%

"+|-|*|/"  {printf("<operadores>")}




%%
