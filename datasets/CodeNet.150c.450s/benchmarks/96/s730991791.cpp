#include<iostream>
#include<string>
using namespace std;

string push[10]={
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

string solve(string in){
  string res="";
  int c=0;
  int n_in=0;
  for(int i=0;i<in.size();i++){
    int t_in=in[i]-'0';
    if(t_in==0){
      if(n_in!=0){
        res+=push[n_in][(c%push[n_in].size())];
      }
      n_in=0;
      c=0;
    }else{
      if(t_in==n_in){
        c++;
      }else{
        c=0;
	n_in=t_in;
      }
    }
  }
  return res;
}



int main(){
  string in;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>in;
    string ans=solve(in);
    if(ans.size()!=0){
      cout<<ans<<endl;
    }
  }
}