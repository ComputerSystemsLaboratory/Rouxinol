#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef vector<int>::iterator ITE;

void print(vector<int> V){
  for(int i = 0; i < V.size(); i++)
    cout << V[i] << " ";
  cout << endl;
}

void input(vector<int>& V, int n){
  while(n--){
    int in;
    cin >> in;
    V.push_back(in);
  }
} 

void make(vector<int>& V){

  int Lim = V.size();
  for(int i = 0; i < Lim-1; i++){
    int sum = V[i];
    for(int j = i+1; j < Lim; j++){
      sum += V[j];
      V.push_back(sum);
    }
  }
  sort(V.begin(),V.end());
}

int main(){
  int n,m;
  while(cin >> n >> m && n+m){
    vector<int> W,H;

    input(H,n);
    input(W,m);

    make(H);
    make(W);

  
    int ans = 0;

    sort(W.begin(),W.end());
    sort(H.begin(),H.end());

    ITE ite = W.begin();

    //  print(W);
    //  print(H);

    while(ite < W.end()){
      ans += upper_bound(H.begin(),H.end(),*ite)-lower_bound(H.begin(),H.end(),*ite);
      //ite = upper_bound(W.begin(),W.end(),*ite);
      ite++;
    }

    cout << ans << endl;
  }
  return 0;
}