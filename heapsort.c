#include<stdio.h>
#include<conio.h>

void insert_heap(void);
void del_heap(void);
void heapsort(void);
int tree[15];
int A[15];
int N=10,item;
void main(){

int i;
A[0]=-1;A[1]=90;A[2]=86;A[3]=88;A[4]=70;A[5]=66;A[6]=66;
A[7]=55;A[8]=44;A[9]=48;A[10]=40;



printf("Given array:");
for(i=1;i<=N;i++)
{
  printf("%d ",A[i]);
}
printf("\nInitialize heapsorting?");
getch();
heapsort();
printf("\nHeapsorted array:");
for(i=1;i<=N;i++)
{
  printf("%d ",A[i]);
}

printf("\nEnter an item:");
scanf("%d",&item);

    insert_heap();
    printf("\nAfter inserting:");
    for(i=1;i<=N;i++){
        printf("%d ",A[i]);
    }

    del_heap();
    printf("\n\nAfter deleting:");
    for(i=1;i<=N;i++){
        printf("%d ",A[i]);
    }

}

void heapsort(void){

int j;
int M=N;
for(j=1;j<=M-1;j++)
{
    N=j;
    item=A[j+1];
    insert_heap();
}
j=1;
while(N>1)
{
    del_heap();
    A[j]=item;
    j++;
}
N=M;
return;
}

void insert_heap(void){

  int ptr,par;
  N++;
  ptr=N;

  while(ptr>1)
  {
      par=(int)ptr/2;
      if(item<=tree[par]){
        tree[ptr]=item;
        return;
      }
      tree[ptr]=tree[par];
      ptr=par;

  }
  tree[1]=item;
  return;

}

void del_heap(void){

int last,left,right,ptr;
item=tree[1];
last=tree[N];
N--;
ptr=1;
left=2;
right=3;
while(right<=N)
{
    if(last>=tree[left] && last>=tree[right])
    {
        tree[ptr]=last;
        return;
    }
    if(tree[right]<=tree[left])
    {
        tree[ptr]=tree[left];
        ptr=left;

    }
    else
    {
        tree[ptr]=tree[right];
        ptr=right;
    }
    left=2*ptr;
    right=left+1;

      }

if((left==N)&&(last<tree[left])){

   ptr=left;


}
tree[ptr]=last;
   return;
}
