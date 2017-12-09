#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
	int a, c;

	int stime;
    long ltime;
    ltime = time(NULL);
    stime = (unsigned) ltime/2;
    srand(stime);

    a = ( rand()%100 ) + 1;

    printf("Enter your number to pick your move (1 = rock, 2 = paper, 3 = scissors): ");
    scanf("%d", &c);

    if(c == 1)
    {
    	if(a <= 33)
    	{
    		printf("The computer picked rock as well! The result is a tie!");
    	}

    	if(a > 33 && a <= 67)
    	{
    		printf("The computer picked paper! You lose!");
    	}

    	if(a > 67)
    	{
    		printf("The computer picked scissors! You win!");
    	}


    }

      if(c == 2)
    {
    	if(a <= 33)
    	{
    		printf("The computer picked rock! You win!");
    	}

    	if(a > 33 && a <= 67)
    	{
    		printf("The computer picked paper as well! The result is a tie!");
    	}

    	if(a > 67)
    	{
    		printf("The computer picked scissors! You lose!");
    	}


    }

      if(c == 3)
    {
    	if(a <= 33)
    	{
    		printf("The computer picked rock! You lose!");
    	}

    	if(a > 33 && a <= 67)
    	{
    		printf("The computer picked paper! You win!");
    	}

    	if(a > 67)
    	{
    		printf("The computer picked scissors as well! The result is a tie!");
    	}


    }


return 0;
}