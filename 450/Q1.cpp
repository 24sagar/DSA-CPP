#include <iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& arr, int n){
    int s=0;
    int e=n-1;

    while (s<e)
    {
        swap(arr[s++],arr[e--]);
    }
}

void print(vector<int> arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int n = arr.size();
    print(arr,n);
    reverse(arr,n);
    print(arr,n);
    return 0;
}