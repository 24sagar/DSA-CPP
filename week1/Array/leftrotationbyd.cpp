
//given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.

#include <iostream>
#include <vector>
#include<stack>
using namespace std;

void leftrotate(vector<int>& arr, int n, int d){

    vector<int> temp;
  
    for (int i = d; i <n ; i++)
    {
        temp.push_back(arr[i]);
    }
    
    for (int i = 0; i <d; i++)
    {
        temp.push_back(arr[i]);
    }
    
    arr =temp;
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
