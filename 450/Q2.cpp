// Maximum and minimum of an array using minimum number of comparisons

// Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

// Examples:

// Input: arr[] = {3, 5, 4, 1, 9}
// Output: Minimum element is: 1
//               Maximum element is: 9

// Input: arr[] = {22, 14, 8, 17, 35, 3}
// Output:  Minimum element is: 3
//               Maximum element is: 35

// to solve this problem we need to sort the array , here i use the quicksort to sorting the array


#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1; i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivin = s+cnt;
    swap(arr[s],arr[pivin]);

    int i=s;
    int j=e;

    while(i<=pivin && j>pivin){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(arr[i] > pivot && arr[j]< pivot){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivin;
}

void quicksort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int p= partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main(){
    int arr[] ={1,4,7,2,8,9,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    quicksort(arr,0,n-1);
    print(arr,n);
    cout<<"The Minimum Element: "<<arr[0]<<endl;
    cout<<"The Maximum Element: "<<arr[n-1]<<endl;
    return 0;
}

