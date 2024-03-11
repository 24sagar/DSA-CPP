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

    int startrow=0;
    int startcol=0;
    int endrow =n-1;
    int endcol = m-1;

    while (startrow <= endrow && startcol <= endcol)
    {
        for (int i = startcol; i <= endcol; i++)
        {
            cout<<arr1[startrow][i]<<" ";
        }

        for (int i = startrow+1; i <=endrow; i++)
        {
            cout<<arr1[i][endcol]<<" ";
        }

        for (int i = endcol-1; i >= startcol; i--)
        {
            if (startrow==endrow)
            {
                break;
            }
            
            cout<<arr1[endrow][i]<<" ";
        }

        for (int i = endrow-1; i>= startrow+1; i--)
        {
            if (startcol==endcol)
            {
                break;
            }
            cout<<arr1[i][startcol]<<" ";
        }
        startrow++;
        startcol++;
        endrow--;
        endcol--;
    }
    
}