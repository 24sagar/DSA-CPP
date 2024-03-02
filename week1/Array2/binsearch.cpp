#include<iostream>
using namespace std;

int bina(int arr[], int n,int k){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid= s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }
        if (arr[mid]<k)
        {
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int target=4;
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<bina(arr,n,target);
    return 0;    
}