/*Teste Z Simples por Emanuel Lima*/

#include <stdio.h>
#include <math.h>

/*Funcao que calcula o teste z comparando medida com referência*/
double testez1 (double vmedio, double referencia, double desvpadm)
{
	double testez1;
	testez1 = (vmedio - referencia)/desvpadm;
	return testez1;
}

/*Funcao que calcula o teste z comparando dois resultados experimentais*/
double testez2 (double valor1, double incerteza1, double valor2, double incerteza2)
{
	double testez2;
	double incerteza1power, incerteza2power;
	incerteza1power = pow(incerteza1, 2);
	incerteza2power = pow(incerteza2, 2);
	testez2 = (valor1 - valor2)/(sqrt(incerteza1power + incerteza2power));
	return testez2;
}

int main()
{
	/*Declaracao das variaveis*/
	char tipo;
	double vmedio, referencia, desvpadm, valor1, incerteza1, valor2, incerteza2, testez;
	printf("Bem vindo ao Teste Z Simples por Emanuel Lima.\n\n");
	/*Loop infinito de execucao*/
	while (1)
	{
		/*Mensagem a ser repetida pedindo o tipo de teste z*/
		printf("Selecione o tipo de Teste Z a ser calculado:\n");
		printf("Digite A para comparar um resultado a uma expectativa.\n");
		printf("Ou digite B para comparar dois resultados experimentais: ");
		scanf(" %c", &tipo);
		/*Switch que direciona para o calculo do teste z correto*/
		switch (tipo)
		{
			/*Referente a funcao testez1*/
			case 'a':
			case 'A': printf("Digite o valor medio: ");
				scanf("%lf", &vmedio);
				printf("Digite o valor de referencia: ");
				scanf("%lf", &referencia);
				printf("Digite o desvio padrao da media: ");
				scanf("%lf", &desvpadm);
				testez = testez1(vmedio, referencia, desvpadm);
				printf("O Teste Z e' %f\n\n", testez);
				break;

			/*Referente a funcao testez2*/
			case 'b':
			case 'B': printf("Digite o primeiro valor: ");
				scanf("%lf", &valor1);
				printf("Digite a incerteza do primeiro valor: ");
				scanf("%lf", &incerteza1);
				printf("Digite o segundo valor: ");
				scanf("%lf", &valor2);
				printf("Digite a incerteza do segundo valor: ");
				scanf("%lf", &incerteza2);
				testez = testez2(valor1, incerteza1, valor2, incerteza2);
				printf("O Teste Z e' %f\n\n", testez);
				break;

			default: printf("Comando incorreto\n\n");
		}
		/*Como fazer para que o usuario tenha a opcao de encerrar o programa?*/
	}
	return 0;
}
