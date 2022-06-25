/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
char s[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void drawBoard();
int main()
{
    int choice,player=1,i;
    char mark;
    do{
        drawBoard();
        player=(player%2)?1:2;
        printf("Player %d: enter choice\n",player);
        scanf("%d",&choice);
        mark=(player==1)?'X':'O';
        if(choice==1&&s[1]=='1')
        s[1]=mark;
        else if(choice==2&&s[2]=='2')
        s[2]=mark;
        else if(choice==3&&s[3]=='3')
        s[3]=mark;
        else if(choice==4&&s[4]=='4')
        s[4]=mark;
        else if(choice==5&&s[5]=='5')
        s[5]=mark;
        else if(choice==6&&s[6]=='6')
        s[6]=mark;
        else if(choice==7&&s[7]=='7')
        s[7]=mark;
        else if(choice==8&&s[8]=='8')
        s[8]=mark;
        else if(choice==9&&s[9]=='9')
        s[9]=mark;
        else
        {
            player--;
            printf("Invalid choice!!/nTake another chance\a \n");
        }
        i=checkwin();
        player++;
        
    }while(i==-1);
    if(i==1)
    {
        drawBoard();
    printf("Player %d won!!!\n\a\a",--player);
    }
    else
    {
        printf("Game Draw!!!");
    }
    return 0;
}
int checkwin()
{
    if(s[1]==s[2]&&s[1]==s[3])
    return 1;
    else if(s[4]==s[5]&&s[4]==s[6])
    return 1;
    else if(s[7]==s[8]&&s[7]==s[9])
    return 1;
    else if(s[1]==s[5]&&s[1]==s[9])
    return 1;
    else if(s[3]==s[5]&&s[3]==s[7])
    return 1;
    else if(s[1]==s[4]&&s[1]==s[7])
    return 1;
    else if(s[2]==s[5]&&s[2]==s[8])
    return 1;
    else if(s[3]==s[6]&&s[3]==s[9])
    return 1;
    else if(s[1]!='1'&&s[2]!='2'&&s[3]!='3'&&s[4]!='4'&&s[5]!='5'&&s[6]!='6'&&s[7]!='7'&&s[8]!='8'&&s[9]!='9')
    return -1;
    else
    return -1;
}
void drawBoard()
{
  printf("\n\n TIC TAC TOE \n\n\a");
  printf("Player 1 (X) V/S Player 2 (O)\n\a\n");
  printf("_________________\n");
  printf("|| %c || %c || %c ||\n",s[1],s[2],s[3]);
  printf("||___||___||___||\n");
  printf("|| %c || %c || %c ||\n",s[4],s[5],s[6]);
  printf("||___||___||___||\n");
  printf("|| %c || %c || %c ||\n",s[7],s[8],s[9]);
  printf("||___||___||___||\n");
}
