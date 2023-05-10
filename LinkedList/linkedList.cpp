//singly linked list implementation with their all functionality


#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

class linkedList
{
private:
    node *head;
    node *tail;

public:
    linkedList();
    ~linkedList();
    void insert();
    void print();
    void insertOne(int);
    void deleteLast();
    void deleteFirst();
    void deleteAtPos(int);
    void insertFirst(int);
    void insertLast(int);
    void insertAtPos(int, int);
    void search(int);
};

linkedList::linkedList()
{
    head = NULL;
    tail = NULL;
}

linkedList::~linkedList()
{
    node *temp = head;
    while(head!=NULL){
        head = head->next;
        delete temp;
        temp = head;
    }
    cout << "list deleted sucessfully" << endl;
   
}

void linkedList::insert(){
    cout << "enter element to insert " << endl;
    int n = 0;
    cin >> n;
    while(n!=-1){
        node *newNode = new node(n);

        if(head==NULL){
            head = newNode;
            tail = newNode;
            cout << "inseted element " << n << " into linkedlist" << endl;
        }else{
            tail->next = newNode;
            cout << "inseted element " << n << " into linkedlist" << endl;
            tail = tail->next;
        }
       cout << "enter element to insert " << endl;
        cin >> n;
    }
}

void linkedList::print(){
    if(head==NULL){
        cout << "linkedlist is empty" << endl;
    }else{
        node *temp = head;
        cout << temp->data;
        while(temp->next!=NULL){
            cout << "-->";
            temp = temp->next;
            cout << temp->data;
        }
        cout << endl;
    }

}

void linkedList::insertOne(int value){
    node *newNode = new node(value);

    if(head==NULL){
        head = newNode;
        tail = newNode;
        cout << "element " << value << " inserted into linkedlist" << endl;
    }else{
        tail->next = newNode;
        cout << "element " << value << " inserted into linkedlist" << endl;
        tail = tail->next;
    }
}

void linkedList::deleteFirst(){
    if(head==NULL){
        cout << "linkedList is empty " << endl;
    }else{
        node *temp = head;
        if(temp->next==NULL){
             cout << "item deleted with data " << temp->data << endl;
             delete temp;
             head = NULL;
        }else{
             temp = head->next;
             cout << "item deleted with data " << head->data << endl;
            
             delete head;
             head = temp;
        }
    }
}



void linkedList:: deleteLast(){
    if(head==NULL){
        cout << "linked list is empty " << endl;
    }else{
        node *temp = head;
        while (temp->next->next!=NULL){
            temp = temp->next;
        }
        tail = temp;
        cout << "item deleted with data " << temp->next->data << endl;
        delete temp->next;
        tail->next = NULL;
    }
}


void linkedList::deleteAtPos(int pos){
    if(head==NULL){
        cout << "linkedList is empty " << endl;
    }else{
        node *temp = head;
        int tempPos = 1;
        if(pos<0){
            cout << "entered position is not valid " << endl;
        }else if(pos==0){
            temp = temp->next;
            cout << "item deleted with data " <<head->data << endl;

            delete head;
            head = temp;
        }
        else{
        while(tempPos<=pos-1){
            tempPos++;
            temp = temp->next;
        }
        if(temp==NULL){
            cout << "invalid position (may be greater than linkedlist )" << endl;
            return;
        }
        node *tempNode = temp->next;
        temp->next = tempNode->next;
        delete tempNode;
        }
    }
    


}


void linkedList::insertFirst(int data){
    node *newNode = new node(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        cout << "item inserted into list with data " << data << endl;
    }else{
        node *temp = head;
        head = newNode;
        head->next = temp;

        cout << "item inserted into list with data " << data << endl;
        
    }
}

void linkedList::insertLast(int data){
    node *newNode = new node(data);

    if(head==NULL){
        head = newNode;
        tail = newNode;
        cout << "item inserted into list with data " << data << endl;

    }else{
        node *temp = head;
        while(temp->next!=NULL){
        temp = temp->next;

        }
        temp->next = newNode;
        tail = newNode;
        cout << "item inserted into list with data " << data << endl;

    }
}

void linkedList::insertAtPos(int pos,int data){
     if(head==NULL && pos>0){
        cout << "operation can't perform it's because list is empty and pos is greater than 0" << endl;
     }else if(head==NULL && pos==0){
        node *newNode = new node(data);
        head = newNode;
        tail = newNode;
        cout << "item inserted into list with data " << data << endl;
     }else{

        node *newNode = new node(data);

        int tempPos = 1;
       if(pos<0){
        cout << "operation can't be perform it's because invalid position " << endl;
       }else if(pos==0){
        newNode->next = head;
        head = newNode;
        cout << "item inserted into list with data " << data << endl;
       }else{
        node *temp = head;
        while (tempPos <= pos-1){
            temp = temp->next;
            tempPos++;
            if(temp==NULL){
                break;
            }
         }
         if(temp==NULL){
            cout << "invalid position (may be greater than linkedlist )" << endl;
            return;
         }
         node *tempNode = temp->next;
         temp->next = newNode;
         newNode->next = tempNode;
        cout << "item inserted into list with data " << data << endl;

       }

     }
}

void linkedList::search(int item){
    if(head==NULL){
       cout << "list is empty " << endl;
    }else{
       node *temp = head;
       int pos = 0;
       while(temp!=NULL){
         if(temp->data==item){
            cout << "item found in the list at " << pos << " location" << endl;
            break;
         }
           temp = temp->next;
            pos++;
       }
       if(temp==NULL){
            cout << "item not available into list" << endl;
       }
    }
}

int main(){
    linkedList l1;
    l1.insert();
    l1.print();
    l1.insertOne(10);
    l1.insertOne(15);
    l1.insertOne(25);
    l1.print();
    l1.deleteLast();
    l1.print();
    l1.insertOne(50);
    l1.print();
    l1.deleteFirst();
    l1.print();
    cout << endl
         << "deleting from pos " << endl;
    l1.deleteAtPos(2);
    l1.print();
    l1.insertFirst(56);
    l1.insertLast(2);
    l1.print();
    l1.insertAtPos(4, 100);
    l1.print();
    l1.search(202);

    return 0;
}