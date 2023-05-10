#include<bits/stdc++.h>
using namespace std;

class stackImp{
    int *data;
    int top;
    int max;
    public:
    stackImp(int max){
        data = new int[max];
        top = -1;
        this->max = max;
    }
    void push(int);
    void pop();
    void print();
    void peek();
};

void stackImp::push(int element){
    if(top>max){
        cout << "stack is full" << endl;
    }else{
        data[++top] = element;
        cout << element << " inserted sucessfully" << endl;
    }
}

void stackImp::print(){
    if(top==-1){
        cout << "Stack is empty" << endl;
    }else{
        for (int i = top; i >=0;i--){
            cout << "| " << data[i] << " |"
                 << endl;
        }
        cout << " ----" << endl;
    }
}
void stackImp::peek(){
    if(top==-1){
        cout << "Stack is empty" << endl;
        
    }else{
        cout << "peek elment is " << data[top] << endl;
    }
}
void stackImp::pop(){
   if(top==-1){
        cout << "Stack is empty" << endl;

   }else{
        cout << data[top--] << " is poped from stack" << endl;
   }
}
int main(){
    stackImp s1(3);
    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.push(13);
    s1.print();
    s1.peek();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.print();

    return 0;
}