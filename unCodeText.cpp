#include <stdio.h>
#include <ctype.h>

int main()
{
 
  FILE *fr, *fw;
  fr=fopen("codedtext.txt","r");
  if(fr==NULL){
     printf("ERROR! I cannot open the file !");
     return 1;
  }
  fw=fopen("uncodedtext.txt","w");
  if(fw==NULL){
     printf("ERROR! I cannot open the file !");
     fclose(fr);
     return 1;
  }
  


  
  char z;
  while( (z=fgetc(fr)) != EOF ){
    putchar(z);
    
     if(z>='a'&&z<='z'||z>='A'&&z<='Z')
    fputc(z-1,fw);
    else if(isalnum(z))
    fputc(z,fw);
    else if(z=='%')
    fputc(' ',fw);
    else if(iscntrl(z))
    fputc(z,fw);
    else if(ispunct(z))
    fputc(z,fw);
 
   
   
   
    	
	
    
    
	

 
	
}
   
    



 
  
  
  fclose(fr);
  fclose(fw);
  
  
  return 0;
}
