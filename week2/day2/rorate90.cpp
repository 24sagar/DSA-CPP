#include<iostream>
using namespace std;



int main(){
    int n,m;
    cout<<"Enter the N: "<<endl;
    cin>>n;
    cout<<"Enter the M: "<<endl;
    cin>>m;
    int arr1[n][m]={0};

    cout<<"Enter the Elements of matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr1[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}