#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n[50];
int i;
int volts = 0;
int main ()
{

		for(i=0;i<=64;i++){
	n[i] = rand() %64;


	/* displaying the random numbers */

if (n[i]<=20)
{
	 printf( "You are really old\n" );
}


else if (n[i] > 20 && n[i]  < 40)
{
	 printf( "You are really naughty\n" );
}

else if(n[i]> 40)
{
	 printf( "You are really young\n" );
}

else;
}

Delay(2000);


    /*Slider set up and user input*/
    
    printf ("\nEnter a Voltage within the range 0 - 100 Volts - ");
	scanf ("%d", &volts);

if (volts < 20)
{
	 printf( "You are really anoying\n" );
	
	}

else if (volts> 20 && volts < 40 )

{
	printf( "You are really anoying\n" );
	
	}

else if(volts > 40)
    
   {
printf( "You are really anoying\n" );
   }  
else;
  

/*comparing user input with board output*/
/*if correct game goes to the next level*/
if( (n[i]<=20) && (volts < 20))
{
i++ ;
	}
else if( (n[i] > 20 && n[i]  < 40) && (volts > 20 && volts < 40))
{
i++ ;
	}
   
else if ((n[i]> 40) && (volts > 40))
		{
	i++ ;
		}
/*if wrong game over*/
else return 0;

}
