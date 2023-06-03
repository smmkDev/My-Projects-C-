#include <stdio.h>
#include <stdlib.h>
char Player1(char player1,char board[3][3],int moves,char space)
{
    int i;
    int j;
    if(moves%2!=0)
    {
    printf("Player1 go\n");
    printf("Enter row number:");
    scanf("%d",&i);
    printf("Enter column number:");
    scanf("%d",&j);
    if(board[i-1][j-1]==space)
    {
    board[i-1][j-1]=player1;
    printf(" %c|%c |%c\n",board[0][0],board[0][1],board[0][2]);
    printf("--|--|--\n");
    printf(" %c|%c |%c\n",board[1][0],board[1][1],board[1][2]);
    printf("--|--|--\n");
    printf(" %c|%c |%c\n",board[2][0],board[2][1],board[2][2]);
    }
    else
    {
     printf("Invalid move\n");
    }
    }
    return board[i-1][j-1];
}


char Player2(char player2,char board[3][3],int moves,char space)
{
    int i;
    int j;
    if(moves%2==0)
    {
    printf("Player2 go\n");
    printf("Enter row number:");
    scanf("%d",&i);
    printf("Enter column number:");
    scanf("%d",&j);
    if(board[i-1][j-1]==space)
    {board[i-1][j-1]=player2;
    printf(" %c|%c |%c\n",board[0][0],board[0][1],board[0][2]);
    printf("--|--|--\n");
    printf(" %c|%c |%c\n",board[1][0],board[1][1],board[1][2]);
    printf("--|--|--\n");
    printf(" %c|%c |%c\n",board[2][0],board[2][1],board[2][2]);
    }
    else
    {
     printf("Invalid move\n");
    }
    }
    return board[i-1][j-1];
}

char checkP1(char player1,char board[3][3],int moves,char win[10])
{
   if(board[0][0]==player1&&board[0][0]==board[0][1]&&board[0][0]==board[0][2])
    {
        printf("Player one wins");
        win[10]="pone";

    }
    if(board[1][0]==player1&&board[1][0]==board[1][1]&&board[1][0]==board[1][2])
    {
      printf("Player one wins");
      win[10]="pone";

    }
     if(board[2][0]==player1&&board[2][0]==board[2][1]&&board[2][0]==board[2][2])
    {
      printf("Player one wins");
      win[10]="pone";

    }
    if(board[0][0]==player1&&board[0][0]==board[1][0]&&board[0][0]==board[2][0])
    {
     printf("Player one wins");
     win[10]="pone";

    }
    if(board[0][1]==player1&&board[0][1]==board[1][1]&&board[0][1]==board[2][1])
    {
       printf("Player one wins");
       win[10]="pone";

    }
    if(board[0][2]==player1&&board[0][2]==board[1][2]&&board[0][2]==board[2][2])
    {
      printf("Player one wins");
      win[10]="pone";

    }
    if(board[0][0]==player1&&board[0][0]==board[1][1]&&board[0][0]==board[2][2])
    {
        printf("Player one wins");
        win[10]="pone";

    }
    if(board[0][2]==player1&&board[0][2]==board[1][1]&&board[0][2]==board[2][0])
    {
       printf("Player one wins");
       win[10]="pone";

    }
    return win[10];
}
char checkP2(char player2,char board[3][3],int moves,char win[10])
{
    if(board[0][0]==player2&&board[0][0]==board[0][1]&&board[0][0]==board[0][2])
    {
       printf("Player two wins");
       win[10]='p';

    }
    if(board[1][0]==player2&&board[1][0]==board[1][1]&&board[1][0]==board[1][2])
    {
       printf("Player two wins");
       win[10]='p';
    }
       if(board[2][0]==player2&&board[2][0]==board[2][1]&&board[2][0]==board[2][2])
    {
         printf("Player two wins");
         win[10]='p';
    }
    if(board[0][0]==player2&&board[0][0]==board[1][0]&&board[0][0]==board[2][0])
    {
        printf("Player two wins");
        win[10]='p';
    }
    if(board[0][1]==player2&&board[0][1]==board[1][1]&&board[0][1]==board[2][1])
    {
         printf("Player two wins");
         win[10]='p';
    }
    if(board[0][2]==player2&&board[0][2]==board[1][2]&&board[0][2]==board[2][2])
    {
        printf("Player two wins");
        win[10]='p';
    }
    if(board[0][0]==player2&&board[0][0]==board[1][1]&&board[0][0]==board[2][2])
    {
         printf("Player two wins");
         win[10]='p';
    }
    if(board[0][2]==player2&&board[0][2]==board[1][1]&&board[0][2]==board[2][0])
    {
         printf("Player two wins");
         win[10]='p';
    }
    return win[10];
}

char checkdraw(char player1,char player2,char board[3][3],int moves,char win[10])
{
    if(moves==9&&board[0][0]!=player1&&board[0][0]!=board[0][1]&&board[0][0]!=board[0][2])
    {

        win[10]="tie";
    }
    if(moves==9&&board[1][0]!=player1&&board[1][0]!=board[1][1]&&board[1][0]!=board[1][2])
    {

       win[10]="tie";
    }
     if(moves==9&&board[2][0]!=player1&&board[2][0]!=board[2][1]&&board[2][0]!=board[2][2])
    {

        win[10]="tie";
    }
    if(moves==9&&board[0][0]!=player1&&board[0][0]!=board[1][0]&&board[0][0]!=board[2][0])
    {

        win[10]="tie";
    }
    if(moves==9&&board[0][1]!=player1&&board[0][1]!=board[1][1]&&board[0][1]!=board[2][1])
    {

         win[10]="tie";
    }
    if(moves==9&&board[0][2]!=player1&&board[0][2]!=board[1][2]&&board[0][2]!=board[2][2])
    {
       printf("It is a tie");
       win[10]="tie";
    }
    if(moves==9&&board[0][0]!=player1&&board[0][0]!=board[1][1]&&board[0][0]!=board[2][2])
    {

        win[10]="tie";
    }
    if(moves==9&&board[0][2]!=player1&&board[0][2]!=board[1][1]&&board[0][2]!=board[2][0])
    {

       win[10]="tie";
    }
     if(moves==9&&board[0][0]!=player1&&board[0][0]!=board[0][1]&&board[0][0]!=board[0][2])
    {
        win[10]="tie";
    }
    if(moves==9&&board[1][0]!=player1&&board[1][0]!=board[1][1]&&board[1][0]!=board[1][2])
    {

       win[10]="tie";
    }
     if(moves==9&&board[2][0]!=player1&&board[2][0]!=board[2][1]&&board[2][0]!=board[2][2])
    {
      win[10]="tie";
    }
     if(moves==9&&board[0][0]!=player2&&board[0][0]!=board[0][1]&&board[0][0]!=board[0][2])
    {
        win[10]="tie";
    }
    if(moves==9&&board[1][0]!=player2&&board[1][0]!=board[1][1]&&board[1][0]!=board[1][2])
    {
        win[10]="tie";
    }
     if(moves==9&&board[2][0]!=player2&&board[2][0]!=board[2][1]&&board[2][0]!=board[2][2])
    {
        win[10]="tie";
    }
    if(moves==9&&board[0][0]!=player2&&board[0][0]!=board[1][0]&&board[0][0]!=board[2][0])
    {

        win[10]="tie";
    }
    if(moves==9&&board[0][1]!=player2&&board[0][1]!=board[1][1]&&board[0][1]!=board[2][1])
    {

        win[10]="tie";
    }
    if(moves==9&&board[0][2]!=player2&&board[0][2]!=board[1][2]&&board[0][2]!=board[2][2])
    {

      win[10]="tie";
    }
    if(moves==9&&board[0][0]!=player2&&board[0][0]!=board[1][1]&&board[0][0]!=board[2][2])
    {

        win[10]="tie";
    }
    if(moves==9&&board[0][2]!=player2&&board[0][2]!=board[1][1]&&board[0][2]!=board[2][0])
    {
       win[10]="tie";
    }
     if(moves==9&&board[0][0]!=player2&&board[0][0]!=board[0][1]&&board[0][0]!=board[0][2])
    {
        win[10]="tie";
    }
    if(moves==9&&board[1][0]!=player2&&board[1][0]!=board[1][1]&&board[1][0]!=board[1][2])
    {
      win[10]="tie";
    }
     if(moves==9&&board[2][0]!=player2&&board[2][0]!=board[2][1]&&board[2][0]!=board[2][2])
    {
      win[10]="tie";
    }

    return win[10];
}
int main()
{
    int moves=1;
    char board[3][3];
    char player1='x';
    char player2='o';
    char space=' ';
    char win[10];
    //Our game board
    printf(" %c|%c |%c\n",board[0][0]=' ' ,board[0][1]=' ',board[0][2]=' ');
    printf("--|--|--\n");
    printf(" %c|%c |%c \n",board[1][0]=' ',board[1][1]=' ',board[1][2]=' ');
    printf("--|--|--\n");
    printf(" %c|%c |%c\n",board[2][0]=' ',board[2][1]=' ',board[2][2]=' ');
    while(moves!=10)
    {
        Player1(player1,board,moves,space);
        checkP1(player1,board,moves,win);
        if(win[10]=="pone")
        {
            break;
        }
        Player2(player2,board,moves,space);
        checkP2(player2,board,moves,win);
        if(win[10]=='p')
        {
            break;
        }
        checkdraw(player1,player2,board,moves,win);
        if(win[10]=="tie")
        {
            printf("It is a tie");
            break;
        }
        moves++;
    }
    return 0;
}
