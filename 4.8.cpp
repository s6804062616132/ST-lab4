#include<stdio.h>
int main(){
	int score,x;
	scanf("%d",&x);
	for(int i = 0 ; i < x ; i++){
		scanf("%d",&score);
		if(score >= 68){
			if(score >= 85 ){
				printf("%d(A)\n", score);
			}else if(score >= 75){
				printf("%d(B)\n", score);
			}else{
				printf("%d(C)\n", score);
			}
		}else{
			if (score >= 55){
				printf("%d(D)\n", score);
			}else{
				printf("%d(F)\n", score);
			}	
		}
	}
	return 0;
}
