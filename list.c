#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

//Should take a pointer to a node struct and print out all of the data in the list
void print_list(struct node * current){
  printf("Let's print some data!\n");
  if (current == NULL){
    printf("Printing empty list: []\n");
  }
  else{
    printf("Printing list: [");
    while(current->next != NULL){
      printf("%d, ", current->i);
      current = current->next;
    }
      printf("]\n");
  }
}
// Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list.
// The second argument should match whatever data you contain in your nodes.
// Returns a pointer to the beginning of the list.

struct node * insert_front(struct node * current, int x){
  struct node * toAdd = (struct node *)malloc(sizeof(struct node));
  toAdd->i = x;
  toAdd->next = current;
  return toAdd;
}

//Should take a pointer to a list as a parameter and then go through the entire list
//freeing each node and return a pointer to the beginning of the list (which should be NULL by then).
// Your list functions should be in a .c/.h library, with a separate .c file used for testing.
struct node * free_list(struct node * begin){
  struct node * current;
  if(begin->next == NULL){
    printf("Everything's been freed. \n");
  }
  else{
    printf("Freed: %d", begin->i);
    current = begin->next;
    return free_list(current);
  }
}
