// Kadane's Algorithm
// Largest Sum Contiguous Subarray

// The idea of Kadane’s algorithm is to maintain a variable max_ending_here that stores the maximum sum contiguous subarray ending at current index and 
// a variable max_so_far stores the maximum sum of contiguous subarray found so far, 
// Everytime there is a positive-sum value in max_ending_here compare it with max_so_far and update max_so_far if it is greater than max_so_far.


// Pseudocode of Kadane’s algorithm:
// Initialize:
//     max_so_far = INT_MIN
//     max_ending_here = 0

// Loop for each element of the array

//   (a) max_ending_here = max_ending_here + a[i]
//   (b) if(max_so_far < max_ending_here)
//             max_so_far = max_ending_here
//   (c) if(max_ending_here < 0)
//             max_ending_here = 0
// return max_so_far
#include<iostream>
using namespace std;

int kadane(int arr[], int n){
    int maxi= arr[0];
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        maxi = max(sum,maxi);

        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main(){
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Largest Sum Contiguous Subarray :"<<kadane(arr,n);
    return 0;
}