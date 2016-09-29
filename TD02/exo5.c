#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int t;
	printf("saisir un temps en seconde\n");
	scanf("%d",&t);
	
	int h,m,s;
	h=0;
	m=0;
	s=0;
	
	s = t%60;
	m = (t/60)%60;
	h = ((t/60)/60)%24;
	
	
	
	if  (h!=0)
	printf("%d secondes correspondent a %d heures %d minutes %d secondes\n",t,h,m,s); 
	
	else if (m!=0)
	printf("%d secondes correspondent a %d heure %d minutes %d secondes\n",t,h,m,s);
	
	else if (s!=0)
	printf("%d secondes correspondent a %d heure %d minute %d secondes\n",t,h,m,s);
	
	
	
	
	
	
}
