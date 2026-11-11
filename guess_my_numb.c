#include <stdio.h>
int main()
{
    char y,n,ch;
    int o,t,count=0;
    do
    {
        printf("Welcome to the number guessing game\n");
        printf("I will guess your number between 0-99\n");
        printf("Please answer the following questions with 'y' for yes and 'n' for no\n");
    printf("Think of a number , dont let me know it\n");
    printf("Is your number odd? (y/n): ");
    count++;
    scanf(" %c", &ch);

    if (ch=='y')
    {
        //check for 1,3,5,7,9
        printf("now think of your numbers ones digit, does it have 2 factors? (y/n): ");
        count++;
        scanf(" %c", &ch);
        if (ch=='y')
        {
         printf("is one of its multiple '6'? (y/n): ");
         count++;
         scanf(" %c", &ch);
         if(ch=='y')
            o=3;
         else
            {
                printf("is '5' one of its factor? (y/n):");
                count++;
                scanf(" %c", &ch);
                if(ch=='y')
                    o=5;
                else
                    o=7;
            }
        }
        else
        {
            printf("is one of its factor '3'? (y/n): ");
            count++;
            scanf(" %c", &ch);
            if(ch=='y')
                o=9;
            else
                o=1;
        }
    }
    else
    {
        //check for 0,2,4,6,8
        printf("now think of your numbers ones digit, does it have '3' as one of its factors? (y/n): ");
        count++;
        scanf(" %c", &ch);
        if (ch=='n')
            {
                printf("does it have '4' as its factor? (y/n): ");
                count++;
                scanf(" %c", &ch);
                if (ch=='y')
                {
                    printf("Does it have 4 factors? (y/n): ");
                    count++;
                    scanf(" %c", &ch);
                    if(ch=='y')
                        o=8;
                    else
                        o=4;
                }
                else
                  printf("is it 0? (y/n): ");
                  scanf(" %c", &ch);
                  if (ch=='y')
                    o=0;
                  else
                    o=2;
            }
        else
        {
            printf("Does it have 4 factors? (y/n): ");
            count++;
            scanf(" %c", &ch);
            if(ch=='y')
                o=6;
            
        }

    }
    printf("Is your number greater than or equal to 50? (y/n): ");
    count++;
    scanf(" %c", &ch);
    if (ch=='y')
    {
        printf("Is your number greater than or equal to 75? (y/n): ");
        count++;
        scanf(" %c", &ch);
        if (ch=='y')
        {
            printf("Think of the digit in your tens place, does it have 2 factors? (y/n): ");
            count++;
            scanf(" %c", &ch);
            if (ch=='y')
                t=7;
            else
            {
                printf("is it even? (y/n): ");
                count++;
                scanf(" %c", &ch);
                if (ch=='y')
                    t=8;
                else
                    t=9;
            }    
        }
        else
        {
            printf("Think of the digit in your tens place, does it have 2 factors? (y/n): ");
            count++;
            scanf(" %c", &ch);
            if (ch=='y')
            {
                printf("is it divisible by 5? (y/n): ");
                count++;
                scanf(" %c", &ch);
                if (ch=='y')
                    t=5;
                else
                    t=7;
            }
            else
              t=6;
        }
    } 
    else
     {
        printf("Is your number greater than 25? (y/n): ");
        count++;
        scanf(" %c", &ch);
        if (ch=='y')
        {
            printf("Think of the digit in your tens place, is one of its factor '2'or '4'? (y/n): ");
            count++;
            scanf(" %c", &ch);
            if (ch=='y')
            {
                printf("does it have 2 factors? (y/n): ");
                count++;
                scanf(" %c", &ch);
                if (ch=='y')
                    t=2;
                else
                    t=4;
            }
            else
                t=3;
        }
        else
        {
            printf("Think of the digit in your tens place, is it even? (y/n): ");
            count++;
            scanf(" %c", &ch);
            if (ch=='y')
            {
                printf("does it have 2 factors? (y/n): ");
                count++;
                scanf(" %c", &ch);
                if (ch=='y')
                    t=2;
                else
                    t=0;
            }
            else
                t=1;
        }
     }  
printf("Your number is %d\n", (t*10)+o);
printf("Computer guessed your number in %d questions\n", count);
printf("Do you want to play again? (y/n): ");
scanf(" %c", &ch);
    }
    while(ch=='y');
    return 0;
}