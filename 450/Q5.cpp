// Move all negative numbers to beginning and positive to end with constant extra space

// An array contains both positive and negative numbers in random order. 
// Rearrange the array elements so that all negative numbers appear before all positive numbers.

// Examples : 

// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>& arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

void move(vector<int>& arr,int n){
    sort(arr.begin(),arr.end());
}

int main(){
    vector<int> arr ={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n= arr.size()-1;
    print(arr,n);
    move(arr,n);
    print(arr,n);
    return 0;
}