#include<iostream>
using namespace std;

struct node {
    int data;
    node* link;
};

node* head;

void insert(int num) {
    node* temp = new node();
    //cout << sizeof(head);
    if(head == NULL) {
        head = temp;
        temp -> data = num;
        temp -> link = NULL;
    }
    else {
        //cout << "hello" << endl;
        node* temp1 = head;
        //cout << head;
        while(temp1->link != NULL) {
            temp1 = temp1->link;
        }
        temp1 ->link = temp;
        temp ->data = num;
        temp ->link = NULL;
        

    }
}

void print() {
    node* temp1 = head;
    while(temp1 != NULL) {
        cout << temp1 ->data <<" ";
        temp1 = temp1 ->link;
    }
    cout << endl;
}


int main() {
    head = NULL;
    insert(4);
    insert(10);
    insert(6);
    print();


    return 0;
}
