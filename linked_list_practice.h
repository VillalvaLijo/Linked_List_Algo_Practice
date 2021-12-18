//linked_list_practice.h

//Lord Alya Vijana

//Developing a linked list structure, A Stack and and some nodes to process this c stack

//Develop this so you can eventually read in JSON and then divide it into a linked list.


//#ifndef LINKED_LIST_PRACTICE_H_
//#define LINKED_LIST_PRACTICE_H_

//Possibly need to define the header file in larger implementations of this program.

typedef struct list_item
{
    char * name; //Test writing a string into a character pointer in a linked list so you
                 //don't have to allocate storage
    long upc;
    double price;
}Item;

 
typedef struct node
{
    Item item;
    Node * next_node;
}Node;

typedef struct list
{
    Node * head_pointer;
    int count;
}Stack;

//Add a pointer to the Stack, so you can call it
Stack * stack_pointer;
