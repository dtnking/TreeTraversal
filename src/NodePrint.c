#include <stdio.h>
#include "NodePrint.h"


void printInterger(Node *node){
  printf("%d, ",node->data);
}

void printDecoratedInterger(Node *node){
  printf("(***)%d, ",node->data);
}

void printString(Node *node){
  printf("%s, ",node->data);
}
