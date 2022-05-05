#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float leitura();
float delta(float a, float b, float c);
float raiz(float a, float b, float d);

main(){
	
	float a, b, c, d;
	
	a = leitura();
	b = leitura();
	c = leitura();
	
	d = delta(a, b, c);
	
	raiz(a, b, d);
	
	return 0;
}

float leitura(){
	
	float tucano;
	printf("Digite o valor do coeficiente: ");
	scanf("%f", &tucano);
	
	return(tucano);
	
}

float delta(float a, float b, float c){
	float d;
	d = pow(b,2) - 4 * a * c;
	printf("Delta = %2.f\n", d);
	
	return(d);
}

float raiz(float a, float b, float d){
	float x1,x2;
	x1 = (-b + sqrt(d)) / (2 * a);
	x1 = (-b - sqrt(d)) / (2 * a);
	printf("x1 = %2.f\nx2 = %2.f", x1, x2);
}
