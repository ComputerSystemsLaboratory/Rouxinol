#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int az, L;

vector<int> V;


string toS(int in){
  string out = "";
  while(in){
    out += in%10+'0';
    in/=10;
  }
  while(out.length()!=L) out += '0';


  reverse(out.begin(),out.end());
  return out;
}
int change(int num){

  string str = toS(num);
  string b,s;
  sort(str.begin(),str.end());
  s = str;
  reverse(str.begin(),str.end());
  b = str;
  stringstream ss_1(b),ss_2(s);
  int num_1,num_2;
  ss_1>>num_1;
  ss_2>>num_2;
  return num_1-num_2;
}


int search(int in){
  
  for(int i = 0; i < V.size(); i++)
    if(V[i] == in) return i;

  return -1;
}

int main(){
  

  while(cin >> az >> L && az+L){
    V.clear();
    int a = az;
    int i = 0,j = 0;
    while(1){
      V.push_back(a);
      a = change(a);
      i++;
      if((j = search(a)) != -1) break;
    }
    cout << j <<" " <<  a << " " <<  i-j << endl;
  }
  return 0;
}