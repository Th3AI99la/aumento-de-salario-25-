/*Faça um programa que receba como entrada o nome e o salário de um funcionário de uma empresa e que
calcule o novo valor do salário do funcionário levando em conta que esse teve um aumento de 25%. O
programa deve exibir na saída a seguinte frase:*/

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

// saída de dados
printf ("O funcionário %s teve um aumento de %.2f e passará a receber um salario de R$:%.2f  ",nome, s1, aumento);
system ("pause");

}
