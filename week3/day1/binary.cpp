#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node{
    public :
    int data;
    Node * left;
    Node * right;
    Node(int k){
        this->data =k;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* Binary(Node *root) {
    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    } 

    cout<<"Enter the data for left side of "<<data<<endl;
    root->left = Binary(root->left);
    cout<<"Enter the data for right side of "<<data<<endl;
    root->right = Binary(root->right);

    return root;
}

// void lvlorder(Node * root){
//     queue <Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         Node* temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         {
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }    
//     }
// }


// void rlvlorder(Node* root)
// {
//     stack <Node *> S;
//     queue <Node *> Q;
//     Q.push(root);
 
//     // Do something like normal level order traversal order. Following are the
//     // differences with normal level order traversal
//     // 1) Instead of printing a Node, we push the Node to stack
//     // 2) Right subtree is visited before left subtree
//     while (Q.empty() == false)
//     {
//         /* Dequeue Node and make it root */
//         root = Q.front();
//         Q.pop();
//         S.push(root);
 
//         /* Enqueue right child */
//         if (root->right)
//             Q.push(root->right); // NOTE: RIGHT CHILD IS ENQUEUED BEFORE LEFT
 
//         /* Enqueue left child */
//         if (root->left)
//             Q.push(root->left);
//     }
 
//     // Now pop all items from stack one by one and print them
//     while (S.empty() == false)
//     {
//         root = S.top();
//         cout << root->data << " ";
//         S.pop();
//     }
// }

void lvlorder(Node * root){
    queue< Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node * temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

void rlvlorder(Node *root){
    queue< Node *> q;
    stack< Node *> s;
    q.push(root);

    while (!q.empty())
    {
        Node * temp = q.front();
        q.pop();
        s.push(temp);

        if(temp->right){
            q.push(temp->right);
        }

        if(temp->left){
            q.push(temp->left);
        }
    }
    while (!s.empty())
    {
        Node * temp = s.top();
        cout<<temp->data<<" ";
        s.pop();
    }
    
}

void inorder(Node * root){
    // LNR
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node * root){
    // NLR
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node * root){
    // LRN
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    // 10 5 3 -1 -1 7 -1 -1 15 12 -1 -1 17 -1 -1 
    Node * root =NULL;

    root = Binary(root);
    cout<<"Level Order Traversal: "<<endl;
    lvlorder(root);
    cout<<endl;
    cout<<"Reverse Level Order Traversal: "<<endl;
    rlvlorder(root);
    cout<<endl;
    cout<<"Pre Order Traversal: "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"In Order Traversal: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Post Order Traversal: "<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}

