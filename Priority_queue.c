#include<stdio.h>

void insert(int,int);
int del(void);
void display(void);
int info[10];
int prn[10];
int link[10];
int front,rear,avail;

int main()
{
    int choice,item,prni;

    info[0]=22;info[2]=33;info[3]=44;info[5]=55;info[6]=66;info[9]=77;
    prn[0]=4;prn[2]=1;prn[3]=2;prn[5]=5;prn[6]=4;prn[9]=6;
    link[0]=6;link[1]=4;link[2]=3;link[3]=0;link[4]=10;link[5]=9;link[6]=5;link[9]=-1;

    front=2;rear=9;avail=1;

while(1){

    printf("\n\nChoose an option:\n");
    printf("1.Insert\n");
     printf("2.delete\n");
      printf("3.Display\n");
       printf("4.Exit\n");

       scanf("%d",&choice);

       switch(choice){

       case 1:{


       printf("\nEnter an element:");
       scanf("%d",&item);

       printf("\nEnter priority of %d:",item);
       scanf("%d",&prni);

       insert(item,prni);

       break;

       }
       case 2:{

       item=del();
       printf("\nItem %d deleted",item);
       break;

       }
       case 3:{

       display();
       break;

       }
       case 4:{
       exit(0);
       break;

       }
       default:{
       printf("\a\nWrong choice");
       break;

       }


    }
}

}

void insert(int I,int p){

int save,new,temp,flag=0;

if(avail==-1){

    printf("\a\nOverflow!");
    return;
}
temp=front;
save=-1;
while(temp!=-1){

    if(prn[temp]>=p)
    {
        new=avail;
        avail=link[avail];
        info[new]=I; prn[new]=p;
        if(save!=-1){

        link[new]=link[save];
        link[save]=new;
       }
       else{
            link[new]=front;
            front=new;

       }

     flag=1;
            break;

    }
    else{
        save=temp;
        temp=link[temp];
    }
    if(flag==0){

        new=avail;
        avail=link[avail];
        info[new]=I;
        link[new]=-1;

        if(front==-1){
            front=rear=new;
            prn[front]=p;
        }

    }
    else{
            link[rear]=new;
            rear=new;
            prn[new]=p;

        }
}

}

int del(void){

int temp,I;
if(front==-1){

    printf("\a\nError!");
    return -999;
}
else{

  temp=front;
  I=info[temp];
  front=link[temp];
  link[temp]=avail;
  avail=temp;
  return I;

}

}

void display(void){

int temp=front;

if(temp==-1){

    printf("\a\nEmpty.");
    return;
}

while(temp!=-1){

    printf("\nINFO->%d\tPriority->%d",info[temp],prn[temp]);
    temp=link[temp];
}
 return;

}
