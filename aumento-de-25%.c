/*Fa�a um programa que receba como entrada o nome e o sal�rio de um funcion�rio de uma empresa e que
calcule o novo valor do sal�rio do funcion�rio levando em conta que esse teve um aumento de 25%. O
programa deve exibir na sa�da a seguinte frase:*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {	
setlocale (LC_ALL, "Portuguese");

// variaveis
 
float s1, salario, aumento;
char nome[40];

// entrada de dados
printf ("Nome do funcionario?");
scanf ("%s", &nome);

printf ("Digite o salario: ");
scanf ("%f",&salario);

// processamento ou calculos
s1=salario*0.25;
aumento=salario+s1;

// sa�da de dados
printf ("O funcion�rio %s teve um aumento de %.2f e passar� a receber um salario de R$:%.2f  ",nome, s1, aumento);
system ("pause");

}
