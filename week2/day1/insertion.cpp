#include<iostream>
using namespace std;

void insert(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int min = arr[i];
        int j =i-1;
        while (j>=0 && arr[j] >min)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=min;
    }
    
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]= {4,1,3,9,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    insert(arr,n);
    print(arr,n);
    return 0;
}