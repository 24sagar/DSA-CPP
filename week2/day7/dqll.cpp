
#include<iostream>
using namespace std;

struct Node {
    int data ;
    Node *next;
    Node *prev;

    Node(int k){
        this->data =k;
        this->next =NULL;
        this->prev =NULL;
    }
};

class Stack
{
    private:
    Node *front;
    Node *back;
    public:
    
    Stack(){
        front=NULL;
        back = NULL;
    }

    void push_back(int k){
        Node *temp = new Node(k);
        if(back == NULL && front == NULL){
            back = front = temp;
            cout<<k<<" is Inserted at back"<<endl;
            return ;
        }
        back->next = temp;
        temp->prev = back;
        back =temp;
        cout<<k<<" is Inserted at back"<<endl;

    }
    void push_front(int k){
        Node *temp = new Node(k);
        if(back == NULL && front == NULL){
            back = front = temp;
            cout<<k<<" is Inserted at front"<<endl;
        }
        temp->next = front;
        front->prev =temp;
        front = temp;
        cout<<k<<" is Inserted at front"<<endl;

    }

    void print(){

        if(front == NULL || back == NULL){
            cout<<"Dque is Empty !"<<endl;
            return;
        }
        Node* temp = front;
        
        while (temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void pop_back(){
        if(front == NULL || back == NULL){
            cout<<"Dque is Empty !"<<endl;
            return;
        }
        Node * temp = back->prev;

        cout<<back->data<<" is Deleted by back"<<endl;
        back->prev =NULL;
        temp->next =NULL;
        back =temp;
    }

    void pop_front(){
        if(front == NULL || back == NULL){
            cout<<"Dque is Empty !"<<endl;
            return;
        }
        cout<<front->data<<" is Deleted by front"<<endl;

        front = front->next;
        front->prev =NULL;
    }

    void isfront(){
        cout<<"Front: "<<front->data<<endl;
    }
    void isback(){
        cout<<"Back: "<<back->data<<endl;
    }
};

int main(){

    Stack s ;

    s.push_back(10);
    s.push_back(20);

    s.push_front(5);
    s.push_front(1);

    s.print();
    s.isfront();
    s.isback();

    s.pop_back();
    s.print();
    s.isfront();
    s.isback();

    s.pop_front();
    s.print();
    s.isfront();
    s.isback();

    return 0;
}