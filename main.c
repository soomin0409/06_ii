#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int square(int n){
	return n*n;
}
	

int main(int argc, char *argv[]){
	int result;
	result= square(5);
	printf("%d",result);
	return 0;
	
}

