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
void deleteNode(struct Node** head,int position){
  if(*head_ref==NULL)
    return;
}
struct Node* temp=*head_ref;
if(position==0){
  *head_ref=temp->next;
  free(temp);
  return;
}
for(int i=0;temp!=NULL && i<position-1;i++)
  temp=temp->next;
if(temp==NULL || temp->next==NULL)
  return;
struct Node* next=temp->next->next;
free(temp->next);
temp->next=next;
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
int main()
{
    struct Node* head = NULL;
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    puts("Created Linked List: ");
    printList(head);
    deleteNode(&head, 4);
    puts("\nLinked List after Deletion at position 4: ");
    printList(head);
    return 0;
}
