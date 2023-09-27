#include<iostream>
#include<vector>

using namespace std;

const int MAX = 10000;

vector<int> V;
int n,a,b,c,x,pos;

void init(){
  V.clear();
  pos = 0;
}

int main(){

  
  while(cin >> n >> a >> b >> c >> x && n+a+b+c+x){
    init();
    for(int i = 0; i < n; i++){
      int num;
      cin >> num; 
      V.push_back(num);
    }

    bool fin = false;

    for(int i = 0; i <= MAX; i++){
      if(x == V[pos]) pos++;
      x = (a*x+b)%c;
      if(pos == V.size()){
	cout << i << endl;
	fin = true;
	break;
      }
    }

    if(fin == false) cout << "-1" << endl;
   
  }
  
  return 0;
}