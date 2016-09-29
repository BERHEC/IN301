#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int a, b, c;
	int res = 0;
	
	
	printf("ecrire une valeur de a\n");
	printf("ecrire une valeur de b\n");
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	
	c=0;	
	
	printf( "%d * %d\n",a,b);
	
	while (a!=1){
		
	if (a%2==0){
		a=a/2;
		b=b*2;}
	else{
		a-=1;
		c=c+b;}
		
	printf( "= %d * %d + %d\n",a,b,c);}
	
		res = b+c;
		printf("le resultat de la multiplication est %d",res);
	
		
	
}
