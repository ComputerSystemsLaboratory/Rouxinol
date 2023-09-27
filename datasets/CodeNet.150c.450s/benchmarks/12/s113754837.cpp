#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

void showNodes(vector<int> tnodes){
  for(int in = 1; in < tnodes.size(); in++){
    //tnodes?????????1????????????????????¨?????¨???
    printf("node %d: key = %d, ", in, tnodes[in]);
    
    int in_p = in/2;
    if(in_p >= 1 && in != in_p){
      printf("parent key = %d, ", tnodes[in_p]);
    }

    int in_l = 2*in+0;
    int in_r = 2*in+1;
    if(in_l < tnodes.size()){
      printf("left key = %d, ", tnodes[in_l]);
    }
    if(in_r < tnodes.size()){
      printf("right key = %d, ", tnodes[in_r]);
    }

    printf("\n");
  }
}

int main(){
  int n;
  cin >> n;
  
  vector<int> nodes;
  nodes.push_back(-1);

  for(int i = 0; i<n; i++){
    int tmpNodeId;
    cin >>   tmpNodeId;
    nodes.push_back(tmpNodeId);
  }
  
  showNodes(nodes);
  
  return 0;
}