#include<stdio.h>

int list[10];
int link[10];
int start,ptr,loc;
int search(int,int);
void main()
{
    int item;
    list[0]=10;list[2]=30;list[4]=20;list[6]=50;list[8]=40;
    link[0]=4;link[1]=9;link[2]=6;link[4]=2;link[5]=7;link[6]=-1;

    start=4;
    ptr=start;

    printf("list:\n");

    while(ptr!=-1)
    {
        printf("%d  ",list[ptr]);
        ptr=link[ptr];
    }
    printf("\nEnter an item to be searched:\n");
    scanf("%d",&item);

    loc=search(loc,item);

}

int search(int loc,int item)
{
     ptr=start;

     while(ptr!=-1)
     {
        if(item>list[ptr])
        {
             ptr=link[ptr];
        }

        else if(item==list[ptr])
        {
            loc=ptr;
            printf("Item found at %d",loc);
            return;
        }

        else
            {
                printf("\n\aNot Found");
                return;
            }
     }
     return (loc);
}


