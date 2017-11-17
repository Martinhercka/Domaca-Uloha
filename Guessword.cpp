#include <stdio.h>
#include <ctype.h>
#include <string.h>
int  main()
{
    char guess;
    char rightanswer [8] = {'t','r','e','n','c','i','n','\0'};               
    char unknown [8] = {'-','-','-','-','-','-','-','\0'};
    int pokus = 10;
   
    int i, j;

   for (i=0; i<pokus; i++)
    {
        printf("\nPlease enter a letter: ");
        scanf("\n%c", &guess);
        guess=tolower(guess);
        
        for (j=0; j<7; j++)
        {
            if (guess == rightanswer[j])
                unknown[j] = guess;
                 
        }
        
        printf("Result: %s ", unknown);
    

    
    	 if(strcmp(unknown,rightanswer)==0)
    	return 0;
    
	
	
    }
  printf("\nYou are looser!");

}
