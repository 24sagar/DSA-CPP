#include<iostream>
using namespace std;

struct QNode
{
    public:
    int data;
    QNode *next ;
    QNode(int k){
        this->data =k;
        this->next =NULL;
    }
};

struct CreateQueue{
   
    QNode *front, *back;
    
    
    CreateQueue(){
        front =NULL;
        back =NULL;
    }

    void insert(int k){
        QNode *temp = new QNode(k);

        if (front==NULL)
        {
            front = back = temp;
            return;
        }
        
        back->next = temp;
        back = temp;
    }

    void del(){
        if (front ==NULL)
        {
            return;
        }

        QNode *temp = front;
        front=front->next;

        if (front==NULL)
        {
            back =NULL;
        }
        
        delete temp; 
    }

    // void print(){
    //     QNode *temp = front;

    //     while (temp->next != NULL)
    //     {
    //         cout<<temp->data<<" -> ";
    //         temp= temp->next;
    //     }
    //     cout<<temp->data<<endl;
    //     delete temp;
    // }
};


int main(){
    CreateQueue que;

    que.insert(5);
    que.insert(6);
    que.insert(7);
    cout<<que.front->data<<endl;
    cout<<que.back->data<<endl;

    que.del();
    cout<<que.front->data<<endl;
    cout<<que.back->data<<endl;
    return 0;

}