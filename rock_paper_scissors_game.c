// *********************||ROCK PAPER SCISSORS Game||***************************


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char stonepaperscissors(char player, char comp){
    // for winning = 1, loosing = -1 and for draw = 0
    if(player=='r' && comp=='p'){return -1;}
    else if(player=='r' && comp=='s'){return 1;}  
    else if(player=='p' && comp=='r'){return 1;}  
    else if(player=='p' && comp=='s'){return -1;}  
    else if(player=='s' && comp=='r'){return -1;}  
    else if(player=='s' && comp=='p'){return 1;}
    else{return 0;}    
}
int main(){
    char you ,comp;
    srand(time(0));//========================-\-->Setting up the Random
    int num = rand()%100+1;//================--\-->fuction by using 
    if(num<33){comp='r';}//=====================|-->1/3 of 100 for
    else if(num>33 && num<66){comp='p';}//===--/-->random characters
    else{comp='s';}//========================-/-->as r, p and s
    printf("\n\t\t\t\t|<<<|Welcome to ROCK PAPER SCISSORS Game|>>>|\n\n");
    printf("Enter r for Rock, p for Paper and s for Scissors: ");
    scanf("%c", &you);
    int result=stonepaperscissors(you, comp);
    printf("\nYou chose %c and Computer chose %c ---> ",you, comp);
    if(result==0){printf("You have a draw!!\n");}
    else if(result==1){printf("You Win...Congratulations!!\n");}
    else{printf("You Lose...better luck next time!!\n");}
    return 0;
}
