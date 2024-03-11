#include <iostream>
#include<queue>
using namespace std;

void print(queue<int> que){

    queue<int> temp=que;

    while (!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
}

int main(){

    queue<int> Queue;
    Queue.push(5);
    Queue.push(6);
    Queue.push(7);
    Queue.push(8);

    print(Queue);
    cout<<Queue.front()<<endl;
    cout<<Queue.back()<<endl;

    Queue.pop();
    Queue.pop();
    print(Queue);
    return 0;
}