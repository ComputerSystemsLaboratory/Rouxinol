#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<char> a[10];
  vector<char> ans;
  a[0].push_back('.');
  a[0].push_back(',');
  a[0].push_back('!');
  a[0].push_back('?');
  a[0].push_back(' ');
  a[1].push_back('a');
  a[1].push_back('b');
  a[1].push_back('c');
  a[2].push_back('d');
  a[2].push_back('e');
  a[2].push_back('f');
  a[3].push_back('g');
  a[3].push_back('h');
  a[3].push_back('i');
  a[4].push_back('j');
  a[4].push_back('k');
  a[4].push_back('l');
  a[5].push_back('m');
  a[5].push_back('n');
  a[5].push_back('o');
  a[6].push_back('p');
  a[6].push_back('q');
  a[6].push_back('r');
  a[6].push_back('s');
  a[7].push_back('t');
  a[7].push_back('u');
  a[7].push_back('v');
  a[8].push_back('w');
  a[8].push_back('x');
  a[8].push_back('y');
  a[8].push_back('z');
  char x;
  int n;
  cin>>n;
  
  scanf("%c",&x);
  int memo=-1,count=-1,z=0;
  for(int i=0;i<n;i++){
    while(1){
      scanf("%c",&x);
      if('0'<=x &&x<='9'){
	z=x-'0';
	if(z!=0){
	  memo=z;
	  count++;
	}
	else{
	  memo--;
	  if(memo==-2){
	    memo=-1;
	    continue;
	  }
	  count%=a[memo].size();
	  cout<<a[memo][count];
	  memo=-1;
	  count=-1;
	}
      }
      else{
	cout<<endl;
      break;
      }
    }
  }
  return 0;
}

