#include <iostream>

class Node{
    public:
    //base structure
    int data;
    Node* next;

    Node(){
        this->data = ' ';
        this->next = nullptr;
    }

    Node (int data){
        this->data = data;
        this->next = nullptr;
    }
    ~Node(){
        delete this;
    }
};

class Stack{
    public:

    Node *head;

    Stack(){
        this->head = nullptr;
    }
    ~Stack(){
        while(head != nullptr)  pop();
    }

    void push(int data){
        //push node with data before first elemet of current list (support)
        Node *new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }
    int pop(){
        //delete first element in list (support)
        int res = head->data;
        head = head->next;
        return res;
    }
    int top(){
        return head->data;
    }
    bool isEmpty(){
        if (head == nullptr)    return false;
        return true;
    }
    void output(){
        Node *tmp = head;
        while (tmp != nullptr){
            std::cout << tmp->data << ' ';
            tmp = tmp->next;
        }
    }
};
