#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<algorithm>

using namespace std;
int res;
vector<string> del(vector<string> s){
  for(int i = 0 ; i < s.size() ; i ++){
    if(s[i][0] != 'A' && s[i][0] == s[i][1] && s[i][0] == s[i][3] && s[i][0] == s[i][4] && s[i][0] == s[i][2]){
      res+=5*(s[i][0]-'0');s[i][0] = s[i][1] = s[i][2] = s[i][3] = s[i][4] = 'A';
    }
    if(s[i][0] != 'A' && s[i][0] == s[i][1] && s[i][0] == s[i][3] && s[i][0] == s[i][2]){
      res+=4*(s[i][0]-'0');s[i][0] = s[i][1] = s[i][2] = s[i][3] = 'A';
    }
    if(s[i][1] != 'A' && s[i][1] == s[i][3] && s[i][1] == s[i][4] && s[i][1] == s[i][2]){
      res+=4*(s[i][1]-'0');s[i][1] = s[i][2] = s[i][3] = s[i][4] = 'A';
    }
    if(s[i][0] != 'A' && s[i][0] == s[i][1] && s[i][0] == s[i][2]){res+=3*(s[i][0]-'0');s[i][0] = s[i][1] = s[i][2] = 'A';}
    if(s[i][1] != 'A' && s[i][3] == s[i][1] && s[i][3] == s[i][2]){res+=3*(s[i][1]-'0');s[i][3] = s[i][1] = s[i][2] = 'A';}
    if(s[i][2] != 'A' && s[i][4] == s[i][3] && s[i][4] == s[i][2]){res+=3*(s[i][2]-'0');s[i][4] = s[i][3] = s[i][2] = 'A';}
  }
  return s;
}

vector<string> move(vector<string> s){
  for(int i = s.size()-1; i > 0 ; i --){
    for(int j = 0 ; j < 5 ; j ++){
      //cout<<s[i][j];
      if(s[i][j] == 'A'){
	//cout<<"c";
	swap(s[i][j],s[i-1][j]);
      }
    } 
    //cout<<endl;
  }
  return s;
  
}

int main(void){
  int n;
  while(cin>>n,n){

    res = 0;
    vector<string> s(n);
    for(int i = 0 ; i < n ;  i++){
      for(int j = 0 ; j < 5 ; j ++){
	char c;
	cin>>c;
	s[i]+=c;
      }
    }
    vector<string> last;
    while(last!=s){
      last=s;
      s = del(s);
      /*
      cout<<"del "<<res<<endl;
      for(int i= 0 ; i< s.size() ; i ++){
	cout<<s[i]<<endl;;
      }
      cout<<"move"<<endl;
      //*/
      s = move(s);
      s = move(s);
      /*
      for(int i= 0 ; i< s.size() ; i ++){
	cout<<s[i]<<endl;;
      }
      //*/
    }
    /*
    cout<<"hellO"<<endl;
    for(int i = 0 ; i < last.size() ; i ++)cout<<last[i]<<endl;
    //*/
    cout<<res<<endl;
  }  
}