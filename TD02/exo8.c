#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define cons 0.000001

int main(){

int nb;
printf("choisir un nombre\n");
scanf("%d",&nb);

int n;

for (n=2; n<nb; n++){

if (nb%n==0){
printf("le nombre choisi n'est pas premier");
break;}

}
		
	
}
