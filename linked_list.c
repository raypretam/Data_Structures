#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* head=NULL;
//Insert in reverse order
void Insert(int x){
  struct Node* temp=(Node*)malloc(sizeof(struct Node));
  temp->data=x;
  temp->next=head;
  head=temp;
}
//Insert at the front of the linked List
void insertFront(int x){
  struct Node* temp=(Node*)malloc(sizeof(struct Node));
  temp->data=x;
  temp->next=head;
  head=temp;
}

//Insert after a given Node
void insertNodeAfter(strcut Node* prev_Node,int x){
  struct Node* temp=(Node*)malloc(sizeof(struct Node));
  if(prev_Node==NULL){
    printf("Cannot be inserted");
    return;
  }
  temp->next=prev_Node->next;
  prev_Node=temp;
}
//Insert at the end of the linked List
void insertEnd(struct Node** head,int x){
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}
//Printing the linked List 
void Print(){
  struct Node* temp=head;
  printf("List is: ");
  while(temp!=NULL){
    printf("%d\t",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
int main(){
  int n,i,x;
  printf("How many numbers\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter a number:\n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
  return 0;
}
