#include<iostream>
using namespace std;
string a[10]={
  "",
  ".,!? ",
  "abc",
  "def",
  "ghi",
  "jkl",
  "mno",
  "pqrs",
  "tuv",
  "wxyz"
};

string s;

string solve(){
  string t="";

  int key=0,cnt=0;
  for(int i=0;i<(int)s.size();i++){
    int S=s[i]-'0';
    if(S==0){
      if(key!=0){
	cnt--;
	int len=a[key].size();
	t.push_back(a[key][cnt%len]);
      }
      cnt=key=0;
    }else if(key==S){
      cnt++;
    }else{
      key=S;
      cnt=1;
    }
  }
  return t;
}

int main(){
  int Tc;
  cin>>Tc;
  while(Tc--){
    cin>>s;
    cout<<solve()<<endl;
  }
  return 0;
}