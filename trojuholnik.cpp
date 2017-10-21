#include <iostream>



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
	if (a + b> c&&b+c>a&&c + a>b){
		printf("Trojuholnik sa da zostrojit.");
	}
	else {
		printf("Trojuholnik sa neda zostrojit");
	}
	return 0;
}
