#include <stdio.h>
#include<conio.h>
 char F(char,char);
 int state[4][3];

 void main(){
 char p[80]={"aaba"};
 char t[80]={"abcaabaca"};
 int k,s,i,index;

state[0][0]=1;
state[0][1]=0;
state[0][2]=0;
state[1][0]=2;
state[1][1]=0;
state[1][2]=0;
state[2][0]=2;
state[2][1]=3;
state[2][2]=0;
state[3][0]=-1;
state[3][1]=0;
state[3][2]=0;


k=0;
s=0;

while(k<strlen(t) && s!=-1){

 if(t[k]=='a')
 i=0;
 if(t[k]=='b')
 i=1;
 if(t[k]=='x')
 i=2;

 s=F(s,i);
 k++;
}
 if(s==-1)
    index=k-strlen(p);

 else
    index=-1;
printf("\nPattern=%s",p);
printf("\nText=%s",t);

if(index!=-1)
    printf("\nIndex of pattern in text is %d",index);
else
    printf("\n\aNo match!");
getch();
}
char F(char Sk,char Tk){

return(state[Sk][Tk]);
}
