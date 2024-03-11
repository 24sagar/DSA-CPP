#include<iostream>
using namespace std;


void selection(int arr[], int n){
    int min =0;

    for (int i = 0; i < n-1; i++)
    {
        min =i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }

        if (min !=i)
        {
            swap(arr[i],arr[min]);
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
    selection(arr,n);
    print(arr,n);

    return 0;    
}