#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* head=NULL;
void Insert(int x){
  struct Node* temp=(Node*)malloc(sizeof(struct Node));
  temp->data=x;
  temp->next=head;
  head=temp;
}
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
