#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){
  struct node * testing = (struct node *)malloc(sizeof(struct node));
  testing = NULL;
  printf("Let's print out an empty list... \n");
  print_list(testing);
  printf("\n");
}
