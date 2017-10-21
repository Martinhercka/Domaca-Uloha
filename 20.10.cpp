#include <iostream>
#include <time.h>
#include <stdlib.h>
#define K 20

int main() {
srand(time(NULL));
int pole[K];
int p;

for(p=0;p<K;p++)
{
	pole[p]=(rand()%9999)+10;
	
}
for(p=0;p<K;p++){
	printf("%d  ",pole[p]);
}
int even=0;
for(p=0;p<K;p++)
{
if(pole[p]%2==0)
even++;	
}

printf("\nEven number: %d ",even);

int irrelevant=0;
for(p=0;p<K;p++)
{
if(pole[p]%2==1)
irrelevant++;	
}

printf("\nIrrelevant number: %d ",irrelevant);

int twodigits=0;
for(p=0;p<K;p++)
{
if(pole[p]<100&&pole[p]>10)
twodigits++;
}
printf("\nTwo digits number: %d",twodigits);


int threedigits=0;
for(p=0;p<K;p++)
{
if(pole[p]<1000&&pole[p]>=100)
threedigits++;
}
printf("\nThree digits number: %d",threedigits);


int fourdigits=0;
for(p=0;p<K;p++)
{
if(pole[p]<10000&&pole[p]>=1000)
fourdigits++;
}
printf("\nFour digits number: %d",fourdigits);

int largest;
for(p=0;p<K;p++)
{
if(largest<pole[p])
largest=pole[p];
}
printf("\nLargest number is: %d",largest);


int lowest;
lowest=pole[0];
for(p=0;p<K;p++)
{
if(lowest>pole[p])
lowest=pole[p];
}
printf("\nLowest number is: %d",lowest);



printf("\nRevers pole: ");
for(p=K-1;p>0;p--)
{
printf("%d ",pole[p]);	
}


int i1,i2;
printf("\n3-digits palindrom: ");
for(p=0;p<K;p++){
if(pole[p]<=999&&pole[p]>=100)

{

i1=pole[p]/100;
i2=pole[p]%10;

if(i1==i2)
printf("%d ",pole[p]);
}
	
}

printf("\n2-digits palindrom:  ");
for(p=0;p<K;p++){
if(pole[p]<=99&&pole[p]>=10)

{

i1=pole[p]/10;
i2=pole[p]%10;

if(i1==i2)
printf("%d ",pole[p]);
}
	
}
int c1,c2,c3,c4;
printf("\n4-digits palindrom: ");
for(p=0;p<K;p++){
if(pole[p]<=9999&&pole[p]>=1000)

{
c1=pole[p]/1000;
c2=(pole[p]%1000)/100;
c3=(pole[p]%100)/10;
c4=pole[p]%10;


if(c1==c4&&c2==c3)
printf("%d ",pole[p]);
}
	
}
int seven=0;
for(p=0;p<K;p++)
{
	if(pole[p]%7==0)
	seven++;
	}	
printf("\nNumber divided seven: %d",seven);

}
