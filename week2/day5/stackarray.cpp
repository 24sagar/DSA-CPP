#include<iostream>
using namespace std;
#define size 10
class Stack
{
private:
    int top;
public:
    int arr[size];
    Stack() {this->top = -1;};
    
    void push(int k){
        if(top >= (size-1)){
            cout<<"Stack OverFlow"<<endl;
            return;
        }
        top++;
        arr[top]=k;
        cout<<k<<" is Push"<<endl;
    }

    void pop(){
        if (top == -1)
        {
            cout<<"Stack UnderFlow"<<endl;
            return;
        }
        int x = arr[top];
        top--;
        cout<<x<<" is Pop"<<endl;
    }

    bool isEmpty(){
        return (top == -1);
    }

    bool isfull(){
        return (top == (size-1));
    }
};

int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.isEmpty();
    return 0;
}