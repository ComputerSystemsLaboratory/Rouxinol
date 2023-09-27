#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

map<int, string> t;

enum NodeType{ROOT = 0, INTERNALNODE = 1, LEAF = 2};
enum ChildZero{CHILDZERO = -1};

struct type_name{
 map<int, string> type_map;
 type_name(){
  type_map[ROOT] = "root";
  type_map[INTERNALNODE] = "internal node";
  type_map[LEAF] = "leaf";
 }
};

struct Tree{
 int n;
 int root;
 int childnodenum;
 struct type_name t;
 vector<int> parent;
 vector<int> depth;
 vector<int> type;
 vector<int> sibling;
 vector<int> degree;
 vector<int> height;
 vector< vector<int> > child;

 Tree(int n) : n(n){
  childnodenum = 2;
  parent.reserve(n); parent.assign(n,-1);
  depth.reserve(n); depth.assign(n,0);
  type.reserve(n); type.assign(n,INTERNALNODE);
  sibling.reserve(n); sibling.assign(n,-1);
  degree.reserve(n); degree.assign(n,0);
  height.reserve(n); height.assign(n,0);
  child.reserve(n); child.assign(n,vector<int>(2,-1));
  
  init();
  SearchRoot();
  ComputeDepth();
  ComputeHeight();
  
 }

 void init(){
  for(int i = 0; i < n; i++){
   int node_num = 0;
   cin >> node_num;
   cin >> child[node_num][0] >> child[node_num][1];

   for(int i = 0; i < childnodenum;i++){   

    if(child[node_num][i] != CHILDZERO) {
     degree[node_num]++;
     parent[child[node_num][i]] = node_num;
     int sib_num = (i == 0 ? 1 : 0);
     if(child[node_num][sib_num] != -1) sibling[child[node_num][i]] = child[node_num][sib_num];
    }
 
   }

   if(degree[node_num] == 0) type[node_num] = LEAF;
  }
 }
 
 void SearchRoot(){
  for(int i = 0; i < parent.size(); i++){
   if(parent[i] == -1){
    root = i;
    type[i] = ROOT;
   }
  }  
 }

 void ComputeDepth(){

   queue<int> queue;

   queue.push(root);
   while( !queue.empty()){
    int key = queue.front();queue.pop();
    for(int i = 0; i < childnodenum; i++){
     int buf = child[key][i];
     if(buf != CHILDZERO){
      queue.push(buf);
      depth[buf] = depth[key] + 1;
     }
    }
   }
 }
 
 void ComputeHeight(){
  for(int i = 0; i < n; i++){
   if(type[i] == LEAF){
    int node = i;
    int buf = 0;
    while(node != root){
     buf++;
     node = parent[node];
     if(height[node] < buf)height[node] = buf;
    }
   }
  }
 }

 void output(){
  for(int i = 0; i < n; i++){
   cout << "node " << i;
   cout << ": parent = " << parent[i];
   cout << ", sibling = " << sibling[i];
   cout << ", degree = " << degree[i];
   cout << ", depth = " << depth[i];
   cout << ", height = " << height[i];
//cout<<child[i][0]<<"_"<<child[i][1];
   cout << ", " << t.type_map[type[i]] << '\n';
  }
 }

 void outputPreorder(){
  cout << "Preorder" << '\n';
  stack<int> stack;
  stack.push(root);
  while(!stack.empty()){
  int buf = stack.top(); stack.pop();
   cout << " " << buf;
   if(child[buf][1] != CHILDZERO) stack.push(child[buf][1]);
   if(child[buf][0] != CHILDZERO) stack.push(child[buf][0]);
  }
  cout << '\n';
 }

 void outputInorder(){
  cout << "Inorder" << '\n';
  
  vector<int> check(n,0);
  stack<int> stack;
  stack.push(root);

  while( !stack.empty()){
   int buf = stack.top();
   
   if(check[buf] == 0){
    check[buf] = 1;
    if(child[buf][0] != CHILDZERO)
     stack.push(child[buf][0]);
   }else{
    cout << " " << buf;
    stack.pop();

    if(child[buf][1] != CHILDZERO)
     stack.push(child[buf][1]);
   }
  }
  cout << '\n';
 }


 void outputPostorder(){
  cout << "Postorder" << '\n';

  vector<int> check(n,0);
  stack<int> stack;
  stack.push(root);
  
  while( !stack.empty()){
   int buf = stack.top();
   
   if(check[buf] == 0){
    check[buf] = 1;
    if(child[buf][1] != CHILDZERO)
     stack.push(child[buf][1]);
    if(child[buf][0] != CHILDZERO)
     stack.push(child[buf][0]);
   }else{
    cout << " " << buf;
    stack.pop();
   }
  }
  cout << '\n';
 }
};

int main(){
 std::ios::sync_with_stdio(false);
 std::cin.tie(0); 

 int n = 0;
 cin >> n;
 
 Tree tree(n);
 
// tree.output();
 tree.outputPreorder();
 tree.outputInorder();
 tree.outputPostorder(); 

 return 0;
}