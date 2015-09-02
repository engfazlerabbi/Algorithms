#include<stdio.h>

int list[10];
int link[10];
int start,ptr;
void process(int);
int count(int);
void main()
{
    int num;
    list[0]=10;list[2]=30;list[4]=20;list[6]=50;list[8]=40;
    link[0]=4;link[1]=9;link[2]=6;link[4]=2;link[5]=7;link[6]=-1;

    start=4;
    ptr=start;

    printf("Initial list:\n");

    while(ptr!=-1)
    {
        printf("%d  ",list[ptr]);
        ptr=link[ptr];
    }
    ptr=start;

    while(ptr!=-1)
    {
        process(ptr);
        ptr=link[ptr];
    }
    printf("\nAfter traversal:\n");

    ptr=start;

    while(ptr!=-1)
    {
        printf("%d  ",list[ptr]);
        ptr=link[ptr];
    }

    printf("\nNumber of elements:%d",count(num));

}
void process(int ptr)
{
    list[ptr]=list[ptr]*5;
}
int count(int num)
{
     num=0;
     ptr=start;

     while(ptr!=-1)
     {
         num++;
         ptr=link[ptr];

     }
     return (num);
}

