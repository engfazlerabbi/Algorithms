#include<stdio.h>

void main()
{
    void s_sort(int [],int);
    int min(int [],int,int);
    int a[5]={44,55,33,22,66};
    int i,n=5;

    printf("Initial array:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }

    s_sort(a,n);

    printf("\nSorted array:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}
void s_sort(int *array,int n)
{
     int i=0,loc=0,tmp=0;

    for(i=0;i<n;i++)
    {
        loc=min(array,i,n);
        tmp=array[loc];
        array[loc]=array[i];
        array[i]=tmp;

    }
}
int min(int *array,int lb,int ub)
{
    int min=lb;

    while(lb<ub)
    {
        if(array[lb]<array[min])
            min=lb;
        lb++;
    }
    return min;
}
