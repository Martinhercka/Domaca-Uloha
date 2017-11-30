#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
	char origin[36];
	char changed[36];
	
}letter;



int main()
{
	
	char text;
	int i=0;
	int j=0;
	letter code[36];
	FILE *f=fopen("abc.txt","r");
	if(f==NULL)
	{
		printf("Error load changedLetters!");
		return 1;
	}
	
		FILE *fr=fopen("secretCode.txt","r");
	if(fr==NULL)
	{
		printf("Error load secretCode!");
		return 1;
	}
	
		FILE *fw=fopen("Uncodedtext.txt","w");
	if(fw==NULL)
	{
		printf("Error load Writed!");
		return 1;
	}
	
while(fscanf(f,"%s%s", &code[j].origin, &code[j].changed)!=EOF){
  	j++;
  	
  }
    
      
    
  

  while ((text = fgetc(fr)) != EOF) {
    if (isupper(text)) { 
	for(i=0;i<j;i++)  {
	if(code[i].changed[0]==text){
	text=code[i].origin[0];
    break;	
							 }
	 				  }
      
      				}
  
	
if(islower(text)){
for(i=0;i<j;i++)	
{
 if	(code[i].changed[0]==toupper(text)){
 	text=tolower(code[i].origin[0]);
 	break;
 									}
}
			  }
	

putchar(text);
fputc(text,fw);




								}
  
 
  



	

	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
