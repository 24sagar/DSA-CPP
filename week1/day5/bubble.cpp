#include<iostream>
using namespace std;

void swap(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}

void bubble(int arr[], int n){
    bool flag =false;
    for(int i=0; i<n-1;i++){
        flag =false;
        for(int j=0; j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
}
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={6,5,4,3,2,1,0};
    int target=4;
    int n= sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    cout<<endl;
    // swap(arr,n);
    bubble(arr,n);
    print(arr,n);

    return 0;    
}