#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main(){
  struct node * testing = (struct node *)malloc(sizeof(struct node));
  testing = NULL;
  printf("Let's print out an empty list... \n\n");
  print_list(testing);

  printf("\n\nAlright, alright, now let's fill it up!\n");
  int i = 0;
  for(; i < 11; i++){
    testing = insert_front(testing, i);
  }
  printf("Should print like this: [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]\n\n");
  print_list(testing);
}

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

struct node * insert_front(struct node * current, int x){
  struct node * toAdd = (struct node *)malloc(sizeof(struct node));
  toAdd->i = x;
  toAdd->next = current;
  return toAdd;
}

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
