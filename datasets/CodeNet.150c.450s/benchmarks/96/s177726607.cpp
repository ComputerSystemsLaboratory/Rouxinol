#include<bits/stdc++.h>
using namespace std;
int main(){
  string table[]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  char str[1280];
  int a;
  cin>>a;
  for(int i=0;i<a;i++){
    cin>>str;
    int r=0;
    char now='0';
    for(int i=0;str[i];i++){
            if(now!=str[i]){
                if(now!='0'){
		  cout<<table[now-'0'][(r-1)%table[now-'0'].size()];
                }
                r=1;
                now=str[i];
            }else r++;
    }
	    cout<<endl;
  }
  return 0;
}

