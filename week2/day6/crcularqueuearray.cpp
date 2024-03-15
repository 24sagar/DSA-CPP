#include<iostream>
using namespace std;

class Queue
{
private:
    int front, rear ;
    int *arr;
    int size;
public:
    Queue(int k) {
        front = rear =-1;
        size = k;
        arr = new int[k];
    }

    void enqueue(int k){
        if ((front == 0 && rear == size-1) || ((rear+1)%size== front))
        {
            cout<<"Queue is Full !"<<endl;
        }
        else if (front==-1)
        {
            front =rear =0;
            arr[rear]=k;
            cout<<k<<" is Insert !"<<endl;
        }
        else if (rear == size-1 && front != 0)
        {
            rear =0;
            arr[rear]= k;
            cout<<k<<" is Insert !"<<endl;

        }else
        {
            rear++;
            arr[rear]=k;
            cout<<k<<" is Insert !"<<endl;
        }
    }

    int dequeue(){
    if (front == -1)
    {
        cout<<"\nQueue is Empty"<<endl;
        return ;
    }
 
    int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size-1)
        front = 0;
    else
        front++;
 
    return data;
    }

    void displayQueue()
    {
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ",arr[i]);
    }
    else
    {
        for (int i = front; i < size; i++)
            printf("%d ", arr[i]);
 
        for (int i = 0; i <= rear; i++)
            printf("%d ", arr[i]);
    }
}
};

int main(){
    Queue que(5);
    cout<<que.dequeue();
    que.enqueue(5);
    que.enqueue(6);
    que.enqueue(7);
    que.displayQueue();
    cout<<que.dequeue();
    cout<<que.dequeue();
    cout<<que.dequeue();

    return 0;
}