#include <iostream>
#include <stdlib.h>
#include <string.h>

int main(){


char temp1[20]="7500000000";

char temp2[20]="12312312";
char temp3[20]="30282000";
long long f1,f2,f3,f4,f5;
long long l1,l2,l3,l4,l5,l6;
int i,j;
int kontr;




	

f1=atoll(temp1);
l1=f1%97;
f5=l1*10*10*10*10*10*10*10*10;


f2=atoll(temp2);
f5=f5+f2;
l4=f5%97;
l4=l4*10*10*10*10*10*10*10*10;

f3=atoll(temp3);
l4=l4+f3;

l2=l4%97;


kontr=98-l2;


printf("\nSK%d%s%s%s",kontr,temp1,temp2,temp3);
	




































}
