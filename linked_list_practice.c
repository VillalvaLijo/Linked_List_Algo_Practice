//linked_list_practice.c

//Lord Alya Vijana

//Program to practice linked lists and heaps
//maybe I'll read data from JSON

//this program contains the functions to be listed in the header file 
// this functions will be used in the driver function to manipulate the linked list.

#include <stdio.h>
#include "linked_list_practice.h"

void add_item(Node * current, Item item, Stack * stack_pointer){
     
    //test Node next_node pointer to see that it is zero
    // that way you won't overwrite the list

    if (current->next_node == NULL)
    {    //Node is last Node in Stack because next_node pointer is NULL
         
    }
}
