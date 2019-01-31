#include <iostream>
#include "Linked_List.h"

using namespace std;

Node * Head = NULL;

void insert(int new_data)
{
    Node * new_node = new Node;
    new_node -> data = new_data;
    new_node -> next = Head;
    Head = new_node;
};

void display()
{
    Node * node = Head;

    while( node != NULL)
    {
        cout<< node -> data << endl;
        node = node -> next;
    };
};

void reverse()
{
    cout<< "Reverse linked List Implementation pending" <<endl;

};

int main(){
    std::cout<<"Linked List Problem Solving!"<<std::endl;
    insert(3);
    insert(4);
    insert(5);
    insert(6);

    display();

    reverse();

    return 0;
}