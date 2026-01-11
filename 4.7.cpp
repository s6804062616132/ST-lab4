#include<stdio.h>
int main(){
	int row,col;
	char x;
	scanf("%c %d %d",&x,&col,&row);
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			printf("%c",x);
		}
		printf("\n");
	}
	return 0;
}
