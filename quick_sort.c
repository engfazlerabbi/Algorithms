#include<stdio.h>>

int arr[5]={44,12,33,55,40};
int n=5;
int quicksort(int,int);

void main()
{
    int i,top,beg,end,loc,lower[5],upper[5];

    printf("Initial array:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);

    }
    top=-1;

    if(n>1)
    {
    top++;
    lower[0]=0;
    upper[0]=n-1;

    }

    while(top!=-1)
    {
        beg=lower[top];
        end=upper[top];
        top--;  ///pop sublist from stack
        loc=quicksort(beg,end);

        if(beg<loc-1)
        {
            top++;
            lower[top]=beg;
            upper[top]=loc-1;

        }
        if(end>loc+1)
        {
            top++;
            lower[top]=loc+1;
            upper[top]=end;
        }
    }
    printf("\nSorted array:\n");

    for(i=0;i<5;i++)
    {
         printf("%d\t",arr[i]);
    }
}
int quicksort(int beg,int end)
{
    int lt,rt,tmp,loc1;
    lt=beg;
    rt=end;
    loc1=beg;

    while(1)
    {
        while(arr[loc1]<=arr[rt]&&loc1!=rt)
            rt--;
        if(loc1==rt)
            return loc1;
        if(arr[loc1]>arr[rt])
        {
            tmp=arr[loc1];
            arr[loc1]=arr[rt];
            arr[rt]=tmp;
            loc1=rt;

        }
        while(arr[lt]<=arr[loc1]&&lt!=loc1)
            lt++;
        if(loc1==lt)
            return lt;
        if(arr[loc1]<arr[lt])
        {
            tmp=arr[loc1];
            arr[loc1]=arr[lt];
            arr[lt]=tmp;
            loc1=lt;

        }
    }
}

