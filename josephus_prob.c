#include<stdio.h>

int jos(int n,int m){

if(n==1)
    return 1;

else
    return((jos(n-1,m)+m-1)%n+1);

}
int main(){

int n=50;
int m=8;

printf("Player who escapes: %d",jos(n,m));

return 0;

}
