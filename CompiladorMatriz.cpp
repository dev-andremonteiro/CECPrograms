#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){	
	FILE *arq;
	arq = fopen("arquivo.txt","wb");
	if(arq == NULL){
		printf("Erro ao abrir o arquivo.");
		return (1);
	}
	int n;
	int x = 0;
	int y = 0;
	srand(time(NULL));
	
	scanf(" %d",&n);
	
	int mat[n][n];
	
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			mat[x][y] = rand()%32001;
			if((rand()%2) != 0) mat[x][y] = mat[x][y] * (-1);
			fprintf(arq,"%d ",mat[x][y]);
		}
		fprintf(arq,"\n");
	}	
	fclose(arq);
		
	return(0);
}
