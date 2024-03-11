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

    for (int col = 0; col < m; col++)
    {
        if (col&1)
        {
            for (int i = n-1; i >= 0; i--)
            {
                cout<<arr1[i][col]<<" ";
            }
            
        }else
        {
            for (int i = 0; i <n; i++)
            {
                cout<<arr1[i][col]<<" ";
            }
        }       
    }
    

    
    
}