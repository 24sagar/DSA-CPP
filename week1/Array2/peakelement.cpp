#include<iostream>
using namespace std;

int peak(int arr[], int s, int e){
    while(s<=e){
        int mid=s+(e-s)/2;
        if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        {
            return arr[mid];
        }
        if(arr[mid]>arr[mid+1]){
            e=mid;
        }else{
            s=mid+1;
        }
    }
    return arr[s];
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    int arr[]={1,4,5,3,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    cout<<peak(arr,0,n-1);
    return 0;
}