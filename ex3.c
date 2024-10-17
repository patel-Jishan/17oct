#include<stdio.h>
int main(){
	int i,j,k,space=0,p;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j);
			
		}
		for(p=1;p<=space;p++){
			printf(" ");
			
		}
		space=space+2;
		for(k=i;k>=1;k--){
			printf("%d",k);
		}
printf("\n");
	}
	
}
