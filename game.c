#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number , guess, nguesses=1;
    // initilization is very important..
 srand(time(0));
    number = rand() % 100 + 1;
    
    // printf("The number is %d \n ", number);

    do
    {
        printf("make the guess between 1 and 100  \n");
        scanf("%d", &guess);

        if (number > guess)
        {
            printf("higher number please \n");
        }
        else if(number < guess)
        {
            printf("lower number please  \n");
        }
        else{
            printf(" you guessed it  right in  %d \n", nguesses);
    }
             nguesses++;
    }

    while (guess != number) ;
    return 0;
}