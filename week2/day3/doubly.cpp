#include <iostream>
using namespace std;

class Node
{
public:
    int data=0;
    Node *next =NULL;
    Node *prev =NULL;
    Node(int d) {
        data=d;
    }
    ~Node(){
        int value = this ->data;
        if(this->next != NULL){
            this->next =NULL;
        }
    }
};

void inserthead(Node * &head, int k){
    Node * NEW = new Node(k);
    NEW->next =head;
    head->prev = NEW;
    head = NEW;
}

void inserttail(Node * &tail, int k){
    Node * NEW = new Node(k);
    tail->next = NEW;
    NEW->prev = tail;
    tail = NEW;
}

void insertposition(Node * &head,Node * &tail, int pos, int k){
    Node* temp = head;
    if (pos==1)
    {
        inserthead(head,k);
        return;
    }
    int cnt=1;
    while (cnt< pos-1)
    {
        temp= temp->next;
        cnt++;
    }
}

void deletepos(Node * &head, Node* &tail, int pos){
    
    Node* temp = head;
    Node* pre = temp->prev;
    if (pos==1)
    {
        temp = temp->next;
        temp->prev =NULL;
        pre ->next =NULL;
        head = temp;
        return;
    }
    int cnt =1;
    while (cnt <= pos)
    {
        pre = temp;
        temp= temp ->next;
        cnt++;
    }

    if(temp == NULL){
        pre ->next = NULL;
        temp ->prev =NULL;
        tail = pre;
        delete temp;
        return;
    }

    pre->next = temp->next;
    temp ->next ->prev =pre;

    delete temp;
}

void print(Node * &head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node *head = new Node(1);
    Node *tail = head;


    inserthead(head,5);
    inserthead(head,6);
    inserthead(head,7);

    // print(head);
    
    inserttail(tail,1);
    inserttail(tail,2);
    inserttail(tail,3);

    print(head);
    cout<<endl;

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    deletepos(head,tail,3);
    print(head);

    // deletepos(head,tail,1);
    // print(head);
    return 0;
}