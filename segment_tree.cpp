#include<bits/stdc++.h>
using namespace std;

void buildTree(int *arr,int* tree,int start,int end,int treeNode){
  if(start==end){
    tree[treeNode]=arr[start];
    return ;
  }
  int mid=(start+end)/2;
  buildTree(arr,tree,start,mid,2*treeNode);
  buildTree(arr,tree,mid+1,end,2*treeNode+1);
  tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];
}

void update(int* arr,int* temp,int treeNode,int start,int end,int idx,int value){
  if(start==end){
    arr[idx]=value;
    tree[idx]=value;
    return;
  }
  int mid=(start+end)/2;
  if(idx<mid){
    update(arr,tree,2*treeNode,start,mid,idx,value);
  }
  else{
    update(arr,tree,2*treeNode+1,mid+1,end,idx,value);
  }
  tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];
}

int main(){
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements: \n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int* tree=new int[2*n];
  buildTree(arr,tree,0,n-1,1);
  update(arr,tree,0,n-1,4,10);
  cout<<"The elements are\n";
  for(int i=1;i<2*n;i++){
    cout<<tree[i]<<endl;
  }
  return 0;
}
