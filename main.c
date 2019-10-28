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

  printf("\nRemove the number 4. Now let's see the list.\n");
  testing = remove_node(testing, 4);
  print_list(testing);

  printf("\nLet's free the list! Starting now...\n");
  testing = free_list(testing);
}
