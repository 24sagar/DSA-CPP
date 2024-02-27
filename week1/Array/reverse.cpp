#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& arr, int s,int e ){
    while (s<e)
    {
        swap(arr[s++],arr[e--]);
    }
}

int main(){
    vector<int> arr ={5,3,6,7,2,1};
    int n = arr.size();
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    reverse(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}