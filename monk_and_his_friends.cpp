  #include<bits/stdc++.h>
  using namespace std;
  typedef long long ll;
  typedef long long int int64;
  typedef pair<int,int> pii;
  typedef pair<ll,ll> pll;
  typedef pair<ll,int> pli;
  typedef vector<int> vi;
  typedef vector<ll> vl;
  typedef vector<pii> vpii;
  typedef vector<pll> vpll;
  #define F first
  #define S second
  typedef vector<pli> vpli;
  #define hell 1000000007
  #define mp make_pair
  #define pb push_back
  #define all(v) v.begin(),v.end()
  #define tests int t; cin>>t; while(t--)
  #define take(a,b,c) for(b=0;b<c;b++) cin>>a;
  #define rep(i,n) for(int i=0;i<n;i++)
  #define io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  struct BSTNode{
    int data;
    BSTNode* left;
    BSTNode* right;
  };
  BSTNode* GetNewNode(int data){
    BSTNode* newNode=new BSTNode;
    newNode->data=data;
    newNode->left=newNode->right=NULL;
  }
  BSTNode* insert(BSTNode* root,int data){
    if(root==NULL)
      root=GetNewNode(data);
    else if(root->data>=data)
        root=insert(root->left,data);
    else
        root=insert(root->right,data);
    return root;
  }
  bool Search(BSTNode* root,int data){
    if(root==NULL)
     return false;
    if(root->data==data)
      return data;
    else if(root->data>=data)
        return Search(root->left,data);
    else return Search(root->right,data);
  }

  int main(){
    BSTNode* root=NULL;
    tests{
      int n,m;
      cin>>n>>m;
      int arr[n+m];
      rep(i,n+m){
        cin>>arr[i];
      }
      rep(i,n){
        root=insert(root,arr[i]);
      }
      for(int i=n;i<n+m;i++){
        if(Search(root,arr[i])==true)
          cout<<"YES\n";
        else if(Search(root,arr[i])==false)
          cout<<"NO\n";
      }
    }
    return 0;
  }
