//given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.

#include <iostream>
#include <vector>
#include<stack>
using namespace std;

void leftrotate(vector<int>& arr, int n, int d){
    int i=1;
    
    while (i<=d)
    {
        int last=arr[0];

        for (int j = 0; j <n-1; j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=last;
        i++;
    }
    
}

int main(){
    int n=5;
    vector<int> arr={1,2,3,4,5};
    for (int i = 0; i <5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    leftrotate(arr,n,2);

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}