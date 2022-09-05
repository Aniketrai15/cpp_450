#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next = NULL;
    }

};

class queue{
    node* front;
    node* back;
    
    public:
    queue(){
        front=NULL;
        back=NULL;
    }

    void enqueue(int x){
        node* n = new node(x);
        if(front==NULL){
            back =n; 
            front=n;
            return; 
        }
        back->next=n;
        back=n;

    }

    void dequeue(){
        
        if(front==NULL){
            cout<<"no ele in queue"<<endl;
            return;
        }
        node* todelete=front;
        front = front->next;
        delete todelete;
    }

    bool empty(){
        return front==NULL;
    }

    int peek(){
        if(front==NULL){
            cout<<"no ele in queue";
            return -1;
        }
        return front->data;
    }
    

};

int main(){
    queue q;
    q.empty();
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    cout<<q.peek();



    return 0;
}