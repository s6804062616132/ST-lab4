#include<stdio.h>
int main(){
	int a,t;
	scanf("%d %d",&a,&t);
	for(int i = 0 ; i < t ; i++){
		for(int j = 0 ; j < t ; j++){
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}
