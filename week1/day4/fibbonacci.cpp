//Example 1: Fibonacci Series using Recursion
#include<iostream>
using namespace std;

int fib(int n){
    if(n==0) return 0;
    if (n==2 || n==1)
    {
        return 1;
    }
    
    return (fib(n-1)+fib(n-2));
    
}

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout << "Fibonacci series of numbers is: "; 
    
    for (int i = 0; i < n; i++) { 
        cout << fib(i) << " "; 
    }
    return 0;
}