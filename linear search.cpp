#include<iostream>
using namespace std;
 
int linear_search(int *a,int size, int key){
    for(int i=0;i<size;i++)
        if(a[i] == key)
            return i+1;
    return 0;
    }
 
int main(){
    int n, key;
    cout<<"How many number do you want: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the searching number: ";
    cin>>key;
    int res = linear_search(arr, n, key);
    if(res==0)
        cout<<"Key not found."<<endl;
    else
        cout<<"Key found at position "<<res<<"."<<endl;
    return 0;
    }