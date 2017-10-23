#include "Traversal.h"
#include <stdio.h>

void _inOrderTreeTraversal(Node *node,   \
                           void(*print)(Node *node)){
  if(node->left != NULL)
    _inOrderTreeTraversal(node->left,print);
  print(node);
  if(node->right != NULL)
    _inOrderTreeTraversal(node->right,print);
}

void inOrderTreeTraversal(Node *node){
  if(node->left != NULL)
    inOrderTreeTraversal(node->left);
  printf("%d, ",node->data);
  if(node->right != NULL)
    inOrderTreeTraversal(node->right);
}


void _preOrderTreeTraversal(Node *node, \
                           void(*print)(Node *node)){
  print(node);
  if(node->left != NULL)
    _preOrderTreeTraversal(node->left,print);
  if(node->right != NULL)
    _preOrderTreeTraversal(node->right,print);
}

void preOrderTreeTraversal(Node *node){
  printf("%d, ",node->data);
  if(node->left != NULL)
    preOrderTreeTraversal(node->left);
  if(node->right != NULL)
  preOrderTreeTraversal(node->right);
}

void postOrderTreeTraversal(Node *node){
  if(node->left != NULL)
    postOrderTreeTraversal(node->left);
  if(node->right != NULL)
    postOrderTreeTraversal(node->right);
  printf("%d, ",node->data);
}
