#include<iostream>
using namespace std;

void select(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int min =i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[min],arr[i]);
        }
        
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
    select(arr,n);
    print(arr,n);
    return 0;
}