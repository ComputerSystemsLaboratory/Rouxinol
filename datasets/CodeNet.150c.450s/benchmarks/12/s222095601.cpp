#include<iostream>
#include<vector>

using namespace std;

void print_f(vector< vector<int> > v,int h){
  for(int i=0;i<h;i++){
    cout << "node " << v[i][0] << ": key = " << v[i][1] << ", ";
    if(v[i][2]!=0)cout << "parent key = " << v[v[i][2]-1][1] << ", ";
    if(v[i][3]<=h) cout << "left key = " << v[v[i][3]-1][1] << ", ";
    if(v[i][4]<=h) cout << "right key = " << v[v[i][4]-1][1] << ", ";
    cout << endl;
  }
}


int main(){
  int h;cin >> h;
  vector< vector<int> > v(h);
  for(int i=0;i<h;i++){
    int k;cin >> k;
    v[i].push_back(i+1);
    v[i].push_back(k);
    int p = -int(-(i+1)/2);
    v[i].push_back(p);
    int l = 2*(i+1);
    v[i].push_back(l);
    int r = 2*(i+1)+1;
    v[i].push_back(r);
  }
  print_f(v,h);


}

