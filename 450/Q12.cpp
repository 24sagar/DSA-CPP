//merge-two-sorted-arrays
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> merge(int arr1[], int n, int arr2[], int m){
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    vector<int> merge;

    int i =0,j=0;
    while (i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
            merge.push_back(arr1[i]);
            i++;
        }else if(arr1[i]==arr2[j]){
            merge.push_back(arr1[i]);
            i++;
            j++;
        }else{
            merge.push_back(arr2[j]);
            j++;
        }
    }

    while (i<n)
    {
        merge.push_back(arr1[i]);
        i++;
    }
    while (j<m)
    {
        merge.push_back(arr2[j]);
        j++;
    }
    return merge;
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main(){
    int arr1[] ={1,2,3,4,5};
    int arr2[] ={6,7,8,9,10};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    print(arr1,n);
    print(arr2,n);

    vector<int> mer =merge(arr1,n,arr2,m);
    for (int i = 0; i < mer.size(); i++)
    {
        cout<<mer[i]<<" ";
    }
    
    return 0;
}
