#include<iostream>
#include<string>
using namespace std;

void revr(string &str, int s, int e ){
    if(s>=e){
        return;
    }
    swap(str[s],str[e]);
    s++;
    e--;
    revr(str,s,e);
}

int main(){
    string str="sa";
    int n=str.length();
    cout<<str<<endl;
    revr(str,0,n-1);
    cout<<str;
    return 0;
}