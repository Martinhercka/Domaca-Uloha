#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int a;
int b;
int c;

printf("Zadaj stranu a: ");
scanf("%d",&a);
printf("Zadaj stranu b: ");
scanf("%d",&b);
printf("Zadaj stranu c: ");
scanf("%d",&c);





if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b){
	printf("Trojuholnik je pravouhly");
}	
else {
	printf("Trojuholnik nie je pravouhly");
}
	return 0;
}
