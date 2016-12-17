#include<stdio.h>
#include<stdlib.h>
#include<time.h>

clock_t temp_ini,temp_fim;

int main(){
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c = 0;
	int x = 0;
	temp_ini = clock();
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(x=0;x<100000;x++){
		c = a;
		a = b;
		b = c + a;
		printf("%d",b);
	}
	
	temp_fim = clock();

	double tempo_gasto = (temp_fim-temp_ini)/CLOCKS_PER_SEC;
	
	printf("\n %f",tempo_gasto);
	
	return 0;
}
