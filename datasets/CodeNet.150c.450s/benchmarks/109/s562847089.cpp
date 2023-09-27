#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
  int n,h,m,s;
  char str;
  int temp;

  while(1){
    int t[86401]={0};
    int max=t[0];
    cin>>n;
    if(n==0)
      break;
    for(int i=0;i<n;i++){
      cin>>h>>str>>m>>str>>s;
      temp=h*3600+m*60+s;
      t[temp]+=1;
      cin>>h>>str>>m>>str>>s;
      temp=h*3600+m*60+s;
      t[temp]+=-1;
    }
    
    for(int i=1;i<=86400;i++){
      t[i]+=t[i-1];
      if(max<=t[i])
        max=t[i];
    }

    cout<<max<<endl;
  }
}

