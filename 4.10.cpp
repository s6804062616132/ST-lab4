#include<stdio.h>
int main(){
	int score;
	int na=0,nb=0,nc=0,nd=0,nf=0;

	while(score >= 0) {
		scanf("%d",&score);
		if(score < 0){
			break;
		}
		if(score >= 68){
			if(score >= 85 ){
				printf("%d(A)\n", score);
				na++;
		
			}else if(score >= 75){
				printf("%d(B)\n", score);
				nb++;
				
			}else{
				printf("%d(C)\n", score);
				nc++;
					
			}
		}else{
			if (score >= 55){
				printf("%d(D)\n", score);
				nd++;
					
			}else{
				printf("%d(F)\n", score);
				nf++;
				
			}	
		}
	}
	printf("A(%d)\n",na);
	printf("B(%d)\n",nb);
	printf("C(%d)\n",nc);
	printf("D(%d)\n",nd);
	printf("F(%d)\n",nf);
	
	return 0;
}
