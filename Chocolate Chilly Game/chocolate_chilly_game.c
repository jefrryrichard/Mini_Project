/*
Name: Jefrry Richard P
Date: 31/10/26
Description: Chocolate Chilly game*/

#include<stdio.h>
int main(){
    int chocolate = 13;
    int pick1,pick2;
    int chocomax = 3;

    printf("_____________________\nCHOCOLATE CHILLI GAME\n_____________________\n\n");

    while(chocolate > 0)
    {

        printf("\nNumber of chocolates available: %d\n",chocolate);
        do
        {
            printf("Player 1:\nPick up chocolates(1-%d): ",chocomax);
            scanf("%d",&pick1);
            if(pick1<1 || pick1>chocomax)
                printf("Invalid choice !\nChoose numbers between 1 and %d\n\n",chocomax);
        }while(pick1<1 || pick1>chocomax);

        chocolate -= pick1;

        if(chocolate == 0)
        {
            printf("\nPlayer 1 got the chilli\nPlayer 2 won !!!\n");
            break;
        }

        if(chocolate < chocomax)
        {
            chocomax = chocolate;
        }


        printf("\nNumber of chocolates available: %d\n",chocolate);
        do
        {
            printf("Player 2:\nPick up chocolates(1-%d): ",chocomax);
            scanf("%d",&pick2);
            if(pick2<1 || pick2>chocomax)
                printf("Invalid choice !\nChoose numbers between 1 and %d\n\n",chocomax);
        }while(pick2<1 || pick2>chocomax);

        chocolate -= pick2;

        if(chocolate == 0)
        {
            printf("\nPlayer 2 got the chilli\nPlayer 1 won !!!\n");
            break;
        }

        if(chocolate < chocomax)
        {
            chocomax = chocolate;
        }
    }

    return 0;
}