#include<stdio.h>
#include<conio.h>
void tower(int,char[],char[],char[]);

void main(){

int n=3;

//printf("Enter number of disks:");

if(n<1){

    printf("\a\nIncorrect value!");
    exit(0);
}
else{
    printf("\nFollowing moves are done for %d disks:\n\n",n);
    tower(n,"A","B","C");
}
 getch();
}
void tower(int N,char BEG[5],char AUX[5],char END[5]){

if(N==1){

     printf("%s -> %s\t",BEG,END);
     return;
}

    tower(N-1,BEG,END,AUX);

    printf("%s -> %s\t",BEG,END);

    tower(N-1,AUX,BEG,END);

    return;


}
