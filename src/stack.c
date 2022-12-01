#include "stack.h"
#include "assert.h"

void initialize(stack* s){
  //implement initialize here
    if (s == NULL)
    s=malloc(sizeof(stack));
    s->head = NULL; //emplement the stack by linked-list
}

void push(int x, stack* s){
    //implement push here
    if(s==NULL)
      return ;
    if (full(s)){
      return ;
    }
    node* n = malloc(sizeof(node));
    n -> data = x; 
    n -> next = s -> head;
    s->head = n;

}

int pop(stack* s){
    // implement pop here
    if(s==NULL){
    return -1;
    } 
    
    int x=s->head->data;
    node* n = s->head;
    s->head = n->next;
    free(n);
    return x;
}


bool empty(stack* s)
{
  /*implement empty here*/

  if(s->head == NULL) {
    printf("\n the stack is empty!\n");
    return true;
  }
  else {
    printf("\nnot empty!\n");
    return false;
  }
      
}

bool full(stack* s) {
    //implement full here
  /*The size limit of a linked-list stack,
   is the amount of allocated memory in the PC*/ 
  return false;
}
