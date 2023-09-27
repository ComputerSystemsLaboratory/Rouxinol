#include<iostream>
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
static const int MAX =  100000;
int i, j, v, num, color[MAX];
vector<int> list[MAX];
 
void dfs(int r, int c){
 stack<int> S;
 S.push(r);
 color[r] = c;
 while( !S.empty() ){
   int u = S.top(); S.pop();
   for(i=0; i<list[u].size(); i++){
     v = list[u][i];
     if(color[v] == -1){
       color[v] = c;
       S.push(v);
     }
   }
 }
}
  
void assigncolor(){
 int id = 1;
 for(i=0; i<num; i++){
   color[i] = -1;
 }
 for(j=0; j<num; j++){
   if(color[j] == -1)
     dfs(j, id++);
 }
}
  
int main(){
 int a, b, trial, start, goal, kaisuu;
 cin >> num >>kaisuu;
  
 for(i=0; i<kaisuu; i++){
   cin >> a >> b;
   list[a].push_back(b);
   list[b].push_back(a);
 }
 
 assigncolor();
 
 cin >> trial;
 
 for(i=1; i<=trial; i++){
   cin >> start >> goal;
   if(color[start] == color[goal]){  
     cout << "yes" << endl;
   } else{
     cout << "no" << endl;
   }
 }
  
 return 0;
}