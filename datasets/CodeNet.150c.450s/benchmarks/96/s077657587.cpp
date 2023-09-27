#include<iostream>

using namespace std;

string s[10] = {"\n",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

char now,before;
string in;


void solve(){
  now = '\n';
  before = 'N';
  int c=0,r=0;
  int index = 0;
  while(in[index++] == '0');
  
  for(int i = index-1; i < in.length(); i++){
    if(in[i] == '0'){
      if(c+r){
	now = s[c][r%s[c].length()];
	cout << now;
	c = r =0;
      }
    }else if(before == in[i]){
      r++;
    }else{
      c = in[i]-'0';
      r = 0;
    }
    before = in[i];
  }
  cout << endl;
}

int main(){
  int N;
  cin >> N;
  while(N--){
    cin.ignore();
    while(getline(cin,in)) solve();
  }
  return 0;
}