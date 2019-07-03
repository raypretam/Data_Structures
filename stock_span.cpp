#include<bits/stdc++.h>
using namespace std;

void calspan(int price[],int n,int span[]){
  stack<int> st;
  st.push(0);
  span[0]=1;
  for(int i=1;i<n;i++){
    while(!st.empty() && price[st.top()]<=price[i])
      st.pop();
    span[i]=(st.empty())?(i+1):(i-st.top());
    st.push(i);
  }
  for(int i=0;i<n;i++)
    cout<<span[i]<<" ";
}
int main(){
  int n;
  cin>>n;
  int price[n];
  for(int i=0;i<n;i++)
    cin>>price[i];
  int span[n];
  calspan(price,n,span);
  return 0;
}
