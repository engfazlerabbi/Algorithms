#include <iostream>

using namespace std;

template<class T>
void exchg(T &a, T &b)
{
	T tmp = b;
	b = a;
	a = tmp;
}

template<class T>
int partition(T a[], int left, int right)
{
	T pivot = a[right];
	int i = left - 1;
	int j = right;
	for(;;)
	{
		while(a[--j] > pivot);
		while(a[++i] < pivot);
		if(i >= j) break;
		exchg(a[i], a[j]);
	}
	exchg(a[right], a[i]);
	return i;
}

template<class T>
void quick(T a[], int left, int right)
{
	if(left >= right) return;
	int p = partition(a, left, right);
	quick(a, left, p-1);
	quick(a, p+1, right);
}

int main()
{
    char a[] = {'A','S','O','R','T','I','N','G',
                'E','X','A','M','P','L','E'};
    quick(a, 0, sizeof(a)/sizeof(a[0])-1);
    size_t sz=sizeof(a)/sizeof(a[0])-1;
    cout<<"After Quicksort:\n"<<endl;
    for(int i=0;i<sz;i++)
    cout<<a[i]<<" ";
    cin.get();
    return 0;
}
