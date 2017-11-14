#include <iostream>
#include <string.h>
#include <stdlib.h>



int main() {
long bankcode;	
long prefix;
long  accnum;
long last=282000;
long long a,b,c;
long long t1,t2,t3,t4,t5;

printf("Enter bankcode:");
scanf("%li",&bankcode);
printf("Enter prefix:");
scanf("%li",&prefix);
printf("Enter accnum:");
scanf("%li",&accnum);

t1=a*10*10*10*10*10*10;
t1=t1%97;
t2=t1*10*10*10*10*10*10*10*10*10*10;
t2=t2+accnum;
t2=t2%97;
t3=t2*10*10*10*10*10*10;
t3=t3+last;
t3=t3%97;
t3=98-t3;

printf("SK%lli%li%0.6li%li",t3,bankcode,prefix,accnum);


	return 0;
}
