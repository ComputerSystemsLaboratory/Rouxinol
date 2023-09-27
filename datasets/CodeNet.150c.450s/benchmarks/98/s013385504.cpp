#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m,n!=0&&m!=0){
    vector<int>ta(n);
    vector<int>ha(m);
    int sum=0;
    int sumt=0;
    for(int i=0;i<n;i++){
      cin>>ta[i];
      sum+=ta[i];
      sumt+=ta[i];
    }
    for(int i=0;i<m;i++){
      cin>>ha[i];
      sum+=ha[i];
    }
    if((sum%2)==1){
      cout<<-1<<endl;
      continue;
    }
    sum/=2;
    //cout<<sum<<" "<<sumt<<endl;
    int i,j;
    for(i=0;i<n;i++){
      bool hantei=false;
      for(j=0;j<m;j++){
	if(sum-sumt+ta[i]==ha[j]){hantei=true;break;}
      }
      if(hantei)break;
    }
    if(i==n)cout<<-1<<endl;
    else cout<<ta[i]<<" "<<ha[j]<<endl;
  }
}