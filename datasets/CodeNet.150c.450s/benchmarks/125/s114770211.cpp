#include<iostream>
#include<vector>
#define SIZE 1000000
using namespace std;

struct Stack{
  int line[SIZE];
  int top;
  void init(){
    top = 0;
  }
  bool empty(){
    return top==0;
  }
  void push(int x){
    line[top]=x;
    top ++;
  }
  int pop(){
    if(empty()) return -1;
    top--;
    return line[top];
  }
};
struct Node
{
  vector<int> toList;
  int dt;
  int ft;
};

Stack stack; 
int t; //time

void init(vector<Node>& nodes)
{
  t=0;
  stack.init();
  stack.push(0);
  for(int i=0;i<nodes.size();i++){
    nodes[i].ft=-1;
    nodes[i].dt=-1;
  }
}
void print(vector<Node> nodes)
{
  int n=nodes.size();
  for(int i=0;i<n;i++){
    cout<<i+1<<" "<<nodes[i].ft<<" "<<nodes[i].dt<<endl;
  }
}
void dfs(vector<Node>& nodes)
{ 
  int idx=stack.pop();
  if(idx<0){
    for(int i=0;i<nodes.size();i++){
      if(nodes[i].ft<0){
	idx=i;
	break;
      }
    }
  }
  //cout<<idx+1<<":";
  if(idx>=0){
    if(nodes[idx].ft<0){
      //cout<<" find";
      t++;
      nodes[idx].ft=t;
    }
    if(nodes[idx].toList.size()<=0){
      //cout<<" toList.size==0"<<endl;
      t++;
      nodes[idx].dt=t;
      dfs(nodes);
    }
    int count=0;
    for(int i=0;i<nodes[idx].toList.size();i++){
      if(nodes[nodes[idx].toList[i]].ft<0){
	//cout<<" jumpto "<<i+1<<endl;
	count++;
	stack.push(idx);
	stack.push(nodes[idx].toList[i]);
	dfs(nodes);
      }
    }
    if(count==0 && nodes[idx].dt<0){
      //cout<<" finish"<<endl;
      t++;
      nodes[idx].dt=t;
      dfs(nodes);
    }
  }else{
    //cout<<"finish dfs"<<endl;
  }
}

int main()
{
  int n,u,k;
  cin>>n;
  vector<Node> nodes(n);
  for(int i=0;i<n;i++){
    cin>>u>>k;
    nodes[i].toList.resize(0);
    for(int j=0;j<k;j++){
      int tmp;
      cin>>tmp;
      nodes[i].toList.push_back(tmp-1);
    }
  }
  init(nodes);
  //print(nodes);

  dfs(nodes);
  print(nodes);
  return 0;
}

