#include<bits/stdc++.h>
using namespace std;


class queueImp{
    int *queue;
    int max, front, rear;

public:
    queueImp(int max){
        queue = new int[max];
        this->max = max;
       rear = -1;
       front = 0;
    }
    void print();
    void enqueue(int);
    void dequeue();
    void frontEle();
};

void queueImp:: enqueue(int data){
    
    if(max-1==rear){
        cout << "queue is full you can't enqueue" << endl;
    }else{
        queue[++rear] = data;
        cout << data << " inserted in queue" << endl;
    }
   
}

void queueImp::dequeue(){
     if(rear==-1){
        cout << "queue is empty you can't dequeue" << endl;
     }else{
        int temp = queue[0];
        for (int i = 0; i < rear;i++){
            queue[i] = queue[i + 1];
        }
        rear--;
        cout << temp << " removed from queue" << endl;
     }
}


void queueImp::print(){
    if(rear==-1){
        cout << "queue is empty" << endl;
    }else{
        cout << "| ";
        for (int i = 0; i <= rear;i++){
            cout << queue[i] << " | ";
        }
        cout << endl;
    }
}
void queueImp::frontEle(){
    if(rear==-1){
        cout << "queue is empty" << endl;
    }else{
        cout<<"front element is " << queue[0] << endl;
    }
}
int main(){

     queueImp q1(3);
     q1.enqueue(5);
     q1.enqueue(10);
     q1.enqueue(15);
     q1.enqueue(120);
     q1.dequeue();
     q1.print();
     q1.frontEle();
     return 0;
}