#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Atividade Pr�-Aula\n");
	
	float a, b, e, f;
	int c, d;
	
	a = 1000;
	b = 1.5;
	
	printf("\nQual o ano? ");
	scanf("%i", &d);
	
	for (c=2006; c<=d; c++) {
		f = c - 2006;
		e = a * (1+((b * f) / 100));
		printf("\nSal�rio em %i: R$%.2f", c, e);
		a = e;
	}
}
