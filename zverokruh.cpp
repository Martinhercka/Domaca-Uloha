#include <iostream>

int main() {
int den;
int mesiac;

printf("Zadaj den: ");
scanf("%d",&den);
printf("Zadaj mesiac: ");
scanf("%d",&mesiac);



switch(mesiac){
case 1:  if(den >=1 && den<=20){
	printf("Tvoje znamenie je: Kozorozec");
	
} if(den>=21&&den<=31)
printf("Tvoje znamenie je: Vodnar");
break;
case 2: if (den>=1&&den<=19){
	printf("Tvoje znamenie je: Vodnar");
	                        }
if(den>=20&&den<=31)
if(den==31||den==30)
printf("CHYBNY DEN");
else 
printf("Tvoje znamenie je: Ryba");

break;	

case 3: if(den>=1&&den<=20){
printf("Tvoje znamenie je: Ryba");	
                           }
if (den>=21&&den<=31)
printf("Tvoje znamenie je: Baran");                           
break;

case 4: if(den>=1&&den<=20){
	printf("Tvoje znamenie je: Baran");
	                        }	
if(den>=21&&den<=31)
if(den==31)
printf("CHYBNY DEN");
else
printf("Tvoje znamenie je: Byk");
break;

case 5: if(den>=1&&den<=21){
	printf("Tvoje znamenie je: Byk");
	}	
if(den>=22&&den<=31)
printf("Tvoje znamenie je: Blizenci");	
break;

case 6: if(den>=1&&den<=21){
	printf("Tvoje znamenie je: Blizenci");
	}
if (den>=22&&den<=31)
if(den==31)
printf("CHYBNY DEN");
else
printf("Tvoje znamenie je: Rak");
break;

case 7: if(den>=1&&den<=22){
	printf("Tvoje znamenie je: Rak");
	}
if(den>=23&&den<=31)
printf("Tvoje znamenie je: Lev");
break;
case 8: if (den>=1&&den<=23){
	printf("Tvoje znamenie je: Lev");
	}
if(den>=24&&den<=31)
printf("Tvoje znamenie je: Panna");
break;
case 9: if(den>=1&&den<=23){
	printf("Tvoje znamenie je: Panna");
	}
if(den>=24&&den<=31)
if(den==31)
printf("CHYBNY DEN");
else
printf("Tvoje znamenie je: Vahy");
break;
case 10:if (den>=1&&den<=23){
	printf("Tvoje znamenie je: Vahy");
	}
if(den>=24&&den<=31){
	printf("Tvoje znamenie je: Skorpion");
}	
break;

case 11: if(den>=1&&den<=22){
	printf("Tvoje znamenie je: Skorpion");
	}
if(den>=23&&den<=31)
if(den==31)
printf("CHYBNY DEN");
else
printf("Tvoje znamenie je: Strelec");
break;
case 12: if(den>1&&den<=21){
	printf("Tvoje znamenie je: Strelec");
}
if(den>=22&&den<=31)
printf("Tvoje znamenie je: Kozorozec");
break;
}
	
	
	
	
	
	
	
	
	
	return 0;
}
