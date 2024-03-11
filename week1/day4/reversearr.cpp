#include<iostream>
using namespace std;

void reverse(int* arr, int n){
    if(n==0){
        return ;
    }
    cout<<arr[n-1] << ' ';
    reverse(arr, n - 1); 
    
}

int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    reverse(arr,n);
    return 0;
}