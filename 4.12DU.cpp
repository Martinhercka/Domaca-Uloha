#include <stdio.h>
#include <ctype.h>

typedef struct table {
	char a;
	char b;
} number;

int main()
{
  
  FILE *f;
  int i,n=0;
  number num[36];
  f=fopen("numbers.txt","r");
  if(f==NULL){
     printf("ERROR! I cannot open the file !");
     return 1;
  }
    FILE *fr;
  
 
  fr=fopen("result.txt","w");
  if(f==NULL){
     printf("ERROR! I cannot open the file !");
     return 1;
  }
  
 
  while(fscanf(f,"%d%d", &num[n].a, &num[n].b)!=EOF){
  	
  	fprintf(fr,"a=%d " "b=%d S=%d o=%d\n ",num[n].a, num[n].b,num[n].a*num[n].b,2*(num[n].a+num[n].b));
  	n++;
  }
  fclose(fr);
  
 
  
  

   

  return 0;
}

