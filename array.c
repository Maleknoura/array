#include<stdio.h>
#include<stdlib.h>
int main(){
	int dim;
	printf("veuillez saisir la dimension de votre tableau : ");
	scanf("%d",&dim);
	int tab[dim][dim];
	for(int i=0; i<dim;i++){
		for(int j=0;j<dim;j++){
			printf("sasir elements :\t [%d][%d]",i,j);
			scanf("%d",&tab[i][j]);
	}
	printf("\n");
	}
		int s =0;//calculez la somme des notes
			for(int i=0; i<dim;i++){
	for(int j=0;j<dim;j++){
		s=s+tab[i][j];
		}
		printf("\n");
		}
	printf("la somme des notes est :%d\n",s);
	int moy;
	printf("la moyenne est : %d \n",s/dim);
	int max=tab[0][0];
			for(int i=0; i<dim;i++){
	for(int j=0;j<dim;j++){
		if(max<tab[i][j])
		max=tab[i][j];
	}
}
	printf("la maximum est : %d \n",max);
	int min=tab[0][0];
			for(int i=0; i<dim;i++){
	for(int j=0;j<dim;j++){
		if(min>tab[i][j])
		min=tab[i][j];
		}	
		}
			printf("la minimum est : %d \n ",min);
	if(s%2==0){
		printf("la somme %d est pair :\n ",s);
	}
	else{
		printf("la somme %d est impair \n :",s );
	}
	return 0 ;
}