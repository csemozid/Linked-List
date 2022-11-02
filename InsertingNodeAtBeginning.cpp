#include<iostream>
using namespace std;
struct node {
    int data;
    node* link;   
};

node* head;

void insertAtBegin(int num) {
    node* temp = new node();
    if(head == NULL) {
        head = temp;
        temp->data = num;
        temp->link = NULL;
    }
    else {
        node* temp1 = head;
        temp->data = num;
        temp->link = head;
        head = temp;
    }
}

void insertAtEnd(int num) {
    node* temp = new node();
    if(head == NULL) {
        head = temp;
        temp ->data = num;
        temp ->link = NULL;   //head = 200 -> 2 -> 3 -> 
    }
    else {
        node* temp1 = head;
        while(temp1 ->link != NULL) {
            temp1 = temp1->link;
        }
        temp1 -> link = temp;
        temp ->data = num;
        temp ->link = NULL;
        //head = temp;
    }
}

void insertAtNthPosition(int num, int pos) {
    node* temp = new node();
    node* temp1 = head;
    for(int i = 1; i < pos-1; i++) {
        temp1 = temp1->link;
    }
    temp ->data = num;
    temp ->link = temp1 ->link;
    temp1 ->link = temp;
}

void print() {
    node* temp1 = head;
    while(temp1 != NULL) {
        cout << temp1->data << " ";
        temp1 = temp1->link;
    }
}

int main() {
    head = NULL;
    insertAtBegin(2);
    insertAtBegin(3);
    insertAtBegin(8);
    insertAtBegin(10);
    insertAtEnd(7);
    insertAtEnd(14);
    insertAtEnd(21);
    insertAtEnd(28);
    insertAtNthPosition(4, 5);
    insertAtBegin(1);

    print();
}