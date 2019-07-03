#include<bits/stdc++.h>
using namespace std;
struct BSTNode{
  int data;
  BSTNode* left;
  BSTNode* right;
};
BSTNode* GetNewNode(int data){
  BSTNode* newNode=new BSTNode;
  newNode->data=data;
  newNode->left=newNode->right=NULL;
  return newNode;
}
BSTNode* insert(BSTNode* root,int data){
  if (root==NULL)
    root=GetNewNode(data);
  else if(root->data>=data)
    root->left=insert(root->left,data);
  else
    root->right=insert(root->right,data);
  return root;
}

int FindHeight(BSTNode* root){
  if(root==NULL)
    return 0;
  else
    return (max(FindHeight(root->right),FindHeight(root->left))+1);
}

int main(){
  BSTNode* root=NULL;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    root=insert(root,arr[i]);
  }
  cout<<FindHeight(root)<<"\n";
  return 0;
}
