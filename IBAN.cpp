#include <iostream>
#include <string.h>
#include <stdlib.h>



int main() {
char bankcode[4];	
char prefix[7]="000000";
char accnum[11];
char last[7]="282000";
long long a,b,c;
long long t1,t2,t3;


printf("Enter bankcode:");
scanf("%s",&bankcode);

printf("Enter accnum:");
scanf("%s",&accnum);

a=atoll(bankcode);
b=atoll(accnum);
c=atoll(last);


t1=a*1000000;
t1=t1%97;
t2=t1*10000000000;
t2=t2+b;
t2=t2%97;
t3=t2*1000000;
t3=t3+c;
t3=t3%97;
t3=98-t3;

printf("SK%0.2lli%s%s%s",t3,bankcode,prefix,accnum);


	return 0;
}
