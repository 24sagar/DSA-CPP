#include<iostream>
#include<string>
using namespace std;

bool palindrone(string str, int s, int e){
    bool p=false;
    if(s>=e){
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }else{
        p=palindrone(str,s+1,e-1);
    }
    return p;
}

int main(){
    string str="sras";
    int n=str.length();
    cout<<palindrone(str,0,n-1);
    return 0;
}