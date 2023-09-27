#include<iostream>

using namespace std;

const int MAX_R = 11;
const int MAX_C = 10001;


bool in[MAX_R][MAX_C];
int R,C,LIM;

void input(){
  for(int i = 0; i < R; i++)
    for(int j = 0; j < C; j++)
      cin >> in[i][j];
}

void print(){
  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++)
      cout << in[i][j] << " ";
    cout << endl;
  }
}

int make(){

  //print();
  int out = 0;
  
  for(int j = 0; j < C; j++){
    int sum = 0;
    for(int i = 0; i < R; i++)
      if(in[i][j]) sum++;
    // cout << " " << max(sum,R-sum);
    out += max(sum,R-sum);
  }
  //  cout << endl;
  return out;
}

int rev(int n){

  for(int i = 0; i < 10; i++)
    if( (n&(1<<i)))
      for(int j = 0; j < C; j++)
	in[i][j] = !in[i][j];

  int max_O = make();


  for(int i = 0; i < 10; i++)
    if( (n&(1<<i)) == 1 )
      for(int j = 0; j < C; j++)
	in[i][j] = !in[i][j];
 
  return max_O;
}

void solve(){
  
  LIM = (1<<R);
  int ans = 0;
  for(int i = 0; i < LIM; i++)
    ans = max(ans,rev(i));

  cout << ans << endl;
}

int main(){
  while(cin >> R >> C && R+C){
    input();
    solve();
  }
  return 0;
}