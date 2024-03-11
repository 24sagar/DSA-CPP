#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int target=4;
    int n= sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            cout<<"Found : "<<i;
        }
    }
    return 0;    
}