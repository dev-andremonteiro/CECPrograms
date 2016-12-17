#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	FILE *arq;
	char carac;

	arq = fopen(argv[1],"r");
	
	if (arq == NULL) {
       printf ("Houve um erro ao abrir o arquivo.\n");
       return 1;
    }else{
    	while((carac=fgetc(arq))!= EOF ){
    		printf("%c",carac);	
		}
	}
	
    fclose (arq);
	return 0;
}



