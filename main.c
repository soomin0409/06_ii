#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n){
	int i,res=1;
	for(i=1;i<=n;i++)
	{
		res= res*i;
	}
	return res;
}


int main(int argc, char *argv[]){
	int n,r,nCr;
	printf("nCr : ");
	scanf("%d %d",&n,&r);
	
	nCr= factorial(n)/(factorial(n-r)*factorial(r));
	printf("nCr : %d\n",nCr);
	return 0;
}

