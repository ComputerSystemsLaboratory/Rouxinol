#include <iostream>
#include <string>
#include <vector>


#define ALREADY 1
#define YET 0

int *passed;
int *distance_ps;

using namespace std;


void bfs(vector< vector<int> > a, int i, int dis){
  // i?????????vector<int>??????????????¢?????????
  dis++;
  vector<int> ai = a[i];
  int n = ai.size();
  // cout << "i: " << i << ",n: " << n << endl;
  for(int j=0;j<n;j++){
    int nexti=ai[j]-1;
    
    if(passed[nexti]==YET || distance_ps[nexti]>dis){
      passed[nexti]=ALREADY;
      distance_ps[nexti]=dis;
      bfs(a, nexti, dis);
    }
  }
}

int main(){
  int n;
  cin >> n;
  vector< vector<int> > a;
  for(int i=0;i<n;i++){
    int u;
    int k;
    cin >> u >> k;
    vector<int> tmpa;
    for(int j=0;j<k;j++){
      int tmp;
      cin >> tmp;
      tmpa.push_back(tmp);
    }
    a.push_back(tmpa);
  }
  
  int a2[n][n];
  passed = new int[n];
  distance_ps = new int[n];
  
  for(int i=0;i<n;i++){
    passed[i] = 0;
    distance_ps[i] = 1000;
  }

  distance_ps[0]=0;
  bfs(a, 0, 0);

  for(int i=0;i<n;i++){
    if(passed[i]==YET){
      distance_ps[i] = -1;
    }
  }
  distance_ps[0]=0;
  
  for(int i=0;i<n;i++){
    cout << i+1 << " " << distance_ps[i] << endl;
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      a2[i][j]=0;
    }
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<(int)a[i].size();j++){
      a2[i][a[i][j]-1] = 1;
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      // if(j!=0)cout << " ";
      // cout << a2[i][j];
    }
    // cout << endl;
  }
      
  
}