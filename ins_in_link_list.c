#include<stdio.h>

int info[21];
int link[21];
int start,avail;

void insloc(int,int);

int finda(int);

void main(){

int ptr,item,loc;

info[0]=11;info[2]=5;info[5]=33;info[8]=44;info[9]=55;
info[11]=66;info[13]=77;info[15]=88;info[16]=99;info[17]=100;info[19]=45;

link[0]=3;link[1]=2;link[2]=11;link[3]=9;link[4]=16;link[5]=5;link[6]=7;link[7]=8;link[8]=19;link[9]=1;
link[10]=4;link[11]=10;link[12]=2;link[13]=-1;link[14]=12;link[15]=14;link[16]=-1;link[17]=-1;link[18]=6;link[19]=13;

start=2;
avail=1;

ptr=start;
printf("List:\n");
while(ptr!=-1){

 printf("%d\t",info[ptr]);
 ptr=link[ptr];

}
printf("\nEnter the item to be inserted:");
scanf("%d",&item);

loc=finda(item);
insloc(item,loc);

ptr=start;
printf("Modified list:\n");

while(ptr!=-1){

printf("%d\t",info[ptr]);
ptr=link[ptr];

}
}
void insloc(int i,int l){

int new;
if(avail==NULL){
    printf("\n\aOverflow");
    exit(0);

}

new=avail;
avail=link[avail];
info[new]=i;

if(l==-1){

    link[new]=start;
    start=new;
}
else{
    link[new]=link[l];
    link[l]=new;

}

}
int finda(int i){

int l,save,p;

if(start==-1){

l=-1;
return l;

}
if(i<info[start]){

    l=-1;
    return l;
}
save=start;
p=link[start];

while(p!=-1){

if(i<info[p]){
    l=save;
    return l;

}
save=p;
p=link[p];
}
l=save;
return save;
}

