#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define cons 0.000001

int main(){

float somme =1.0;
float preced=0.0;
int i = 2;


while ((somme-preced)>=cons){
	
	
	preced=somme;
	
	somme += 1.0/((float)i*i);
		
	i++;
	
	}
printf("%f\n",somme);

		
	
}
