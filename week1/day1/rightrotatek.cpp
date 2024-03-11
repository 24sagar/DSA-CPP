#include <iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& arr, int n, int k){
    if(k==0){
        return;
    }
    int temp= arr[n-1];

    for (int i = n-1; i > 0 ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0]=temp;

    rotate(arr,n,k-1);

}

int main(){
    vector<int> arr ={1, 3, 5, 7, 9};
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotate(arr,n,2);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}