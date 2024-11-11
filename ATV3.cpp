#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int mat[3][3], cont=0, soma=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			mat[i][j]=rand()%100;
			if(mat[i][j]%2==0){
			}
		}
	}
	printf("Matriz aleatória:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(mat[i][j]%2!=0){
				cont+=1;
				soma+=mat[i][j];
			}
		}
	}
	printf("A média dos valores ímpares da matriz é: %d\n",soma/cont);
	cont=0;
	soma=0;
}
