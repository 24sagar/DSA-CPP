#include<iostream>
using namespace std;



int main(){
    int n,m;
    cout<<"Enter the N: "<<endl;
    cin>>n;
    cout<<"Enter the M: "<<endl;
    cin>>m;
    int arr1[n][m]={0};
    int arr2[n][m]={0};
    cout<<"Enter the Elements of first matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr1[i][j];
        }
        
    }
    cout<<"Enter the Elements of second matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr2[i][j];
        }
        
    }

    cout<<"first Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"second Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr[n][m]={0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = 0;
 
            for (int k = 0; k < n; k++) {
                arr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    
    cout<<"Multiplication of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}