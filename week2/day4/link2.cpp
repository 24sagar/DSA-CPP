#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int data;
    Queue *next;

    Queue(int k){
        this->data = k;
        this->next =NULL;
    }

};

struct CreateQueue{
    Queue *front ;
    Queue *rear ;
    
    CreateQueue(){
        front = rear = NULL;
    }

    void enqueue(int k){
        Queue * temp = new Queue(k);

        if(rear==NULL){
            front=rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    void dequeue(){
        if(front==NULL){
            return;
        }

        Queue * temp = front;
        front= front->next;
        

        if (front==NULL)
        {
            rear=NULL;
        }
        delete temp;
    }

};
     






int main(){
    CreateQueue q;
	q.enqueue(10);
	q.enqueue(20);
	q.dequeue();
	q.dequeue();
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.dequeue();
    cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
	cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
    return 0;
}