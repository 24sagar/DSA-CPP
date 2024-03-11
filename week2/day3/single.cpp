#include <iostream>
using namespace std;

class Node
{
public:
    int data=0;
    Node *next =NULL;

    Node(int d) {
        data=d;
    }
    
};

void inserthead(Node* &head, int k ){
    Node *NEW = new Node(k);
    NEW ->next = head;
    head=NEW;
}

void inserttail(Node * &tail, int k){
    Node *NEW = new Node(k);
    tail->next = NEW;
    tail = NEW;
}

void insertmiddle(Node * &head, Node * &tail, int position, int k){
    Node* temp = head;
    if (position==1)
    {
        inserthead(head,k);
        return;
    }

    int cnt=1;
    while (cnt< position-1)
    {
        temp= temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        inserttail(tail,k);
        return;
    }
    
    Node * NEW = new Node(k);
    NEW ->next = temp->next;
    temp->next = NEW; 
}

void deletenode(int position, Node * & head, Node * &tail){
    if (position==1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    else
    {
        Node* temp = head;
        Node* prev =NULL;

        int cnt=1;
        while (cnt <= position)
        {
            prev  = temp;
            temp= temp->next;
            cnt++;
        }
        if (temp->next==NULL)
        {
            prev ->next =NULL;
            tail = prev;
        }
        
        prev->next = temp->next;
        delete temp;
    }
}

void print(Node * &head){
    Node *temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp= temp->next;
    }
    cout<<"NULL";
    delete temp;
} 
int main(){
    Node *head = new Node(1);
    Node *tail = head;
    inserthead(head,5);
    inserthead(head,6);
    inserthead(head,7);
    /////
    inserttail(tail,1);
    inserttail(tail,2);
    inserttail(tail,3);
    print(head);
    cout<<endl;
    deletenode(1,head,tail);
    print(head);
    cout<<endl;
    deletenode(5,head,tail);

   
    print(head);
    cout<<endl;

    cout<<"Head :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;

    return 0;
}
