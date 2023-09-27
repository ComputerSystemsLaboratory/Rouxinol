#include <iostream>
#include <string>
#include <vector>


using namespace std;


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
      if(j!=0)cout << " ";
      cout << a2[i][j];
    }
    cout << endl;
  }
      
  
}