/***
Bubble Sort

Bubble sort is a simple sorting algorithm that works by repeatedly stepping through the list
to be sorted, comparing each pair of adjacent items and swapping them if they are in the
wrong order. The pass through the list is repeated until no swaps are needed,
which indicates that the list is sorted.


C++ code
****/
#include <iostream>

using namespace std;

void BubbleSort(int *a, int size)
{
	int i,j,k,temp;
	for(i = 0; i < size-1; i++) {
		for(j=0; j < size -1; j++) {
			if(*(a+j) > *(a+j+1)) {
				temp = *(a+j+1);
				*(a+j+1) = *(a+j);
				*(a+j) = temp;
			}
		}
		for(k = 0; k < size; k++)
		  cout << *(a+k) <<" ";
	    cout << endl;

	}
	cout << "======================" << endl;
	for(k = 0; k < size; k++)
		  cout << *(a+k) <<" ";
	    cout << endl;

}

int main()
{
	int k;
	int a[] = {5,7,1,3,4,9,2,6,8,0};
	const size_t sz = sizeof(a)/sizeof(a[0]);
	for(k = 0; k < sz; k++)
		cout << *(a+k) <<" ";
	cout << endl;
	cout << "======================" << endl;
	BubbleSort(a,sz);
}
