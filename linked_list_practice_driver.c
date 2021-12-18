//linked_list_practice_driver.c

//Lord Alya Vijana

//driver program to test out linked_list_practice program

#include <stdio.h>
#include "linked_list_practice.h"


int main(){

    Item item_test;

    item_test.name = "Lord Alya Vijana";
    item_test.upc = 123498572;
    item_test.price = 4567.102481739;

    printf("Test Item: Name: %s\nUPC: %ld\nPrice: %lf\n", item_test.name, item_test.upc, item_test.price);

    return 0;
}

