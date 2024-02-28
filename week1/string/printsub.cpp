#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    
    string str ="abcd";
    int n=str.length();

    for (int i = 0; i <n ; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<str.substr(i,j)<<endl;
        }
        
    }
    
    return 0;
}