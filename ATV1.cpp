#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int mat[3][3];
	while(true){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("Digite o valor da posi��o [%d][%d]: ",i+1,j+1);
				scanf("%d",&mat[i][j]);
			}
		}
		printf("Os valores �mpares da matriz s�o:\n");
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(mat[i][j]%2==1){
					printf("%d, ",mat[i][j]);
				}
			}
		}
	}
}
