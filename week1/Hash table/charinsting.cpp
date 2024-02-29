//Example- Count characters in the String.

#include<iostream>
using namespace std;

int main(){
    string str="";
    cout<<"Enter the string: "<<endl;
    cin>>str;
    char ch;
    int arr[26]={0};
    for (int i=0; i < str.length(); i++)
    {
        arr[str[i]-'a']++;
    }

    cout<<"Enter the character : "<<endl;
    cin>>ch;
    cout<<"count of character :"<<arr[ch-'a'];    
    return 0;
}