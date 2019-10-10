#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int x, int y){
	int result;
	result=x+y;
	return result;
}
int square(int n){
	return n*n;
}
int getmax(int a,int b)
{
	if(a>b)
		return a;
		
	return b;
	
}
int main(int argc, char *argv[]) {
	int x=4,y=7;
	int output;
	
	output=sum(x,y);	
	printf("sum : %d \n",output);
	
	output=square(x);
	printf("square : %d \n",output);
	
	printf("Max : %d \n",getmax(x,y));
	
	
	return 0;
}
