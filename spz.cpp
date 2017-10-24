#include <iostream>
#include <time.h>
#include <stdlib.h>

int main() {
srand(time(NULL));
char spz[3];
char pismena[2];
int x;
int i;
for(i=0;i<3;i++){
	spz[i]=rand()%9+48;
}

for(i=0;i<2;i++){
	pismena[i]=rand()%25+65;
}

printf("KE %s%s",spz,pismena);


	return 0;
}
