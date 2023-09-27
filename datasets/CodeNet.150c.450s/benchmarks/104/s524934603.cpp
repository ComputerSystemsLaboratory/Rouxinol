#include<bits/stdc++.h>
using namespace std;
int w,n;
string stick[31];
string stick2[31];
string num[31]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"};
vector<pair<string,string> > pii;
int main(){
  cin>>w>>n;
  for(int i=1;i<=w;i++){
    if(i>=1&&i<=9)
      stick[i-1]=i+'0';
    else if(i>=10&&i<=99){
      stick[i-1]=(i/10)+'0';
      stick[i-1]+=(i%10)+'0';
    }
  }
  for(int i=0;i<n;i++){
    string a,b,c;
    cin>>a;
    for(int j=0;j<a.size();j++){
      if(a[j]==','){
	b=a.substr(0,j);
	c=a.substr(j+1,a.size()-b.size()-1);
      }
    }
    pii.push_back(make_pair(b,c));
  }
  for(int i=0;i<w;i++){
     for(int j=0;j<n;j++){
    if(stick[i]==pii[j].first)
      stick[i]=pii[j].second;
    else if(stick[i]==pii[j].second)
      stick[i]=pii[j].first;
     }
  }
  for(int i=0;i<w;i++){
    for(int j=0;j<w;j++){
      if(stick[i]==num[j]){
	if(i>=0&&i<=8)
	  stick2[j]=i+'1';
	else if(i>=9&&i<=99){
	  stick2[j]=((i+1)/10)+'0';
	  stick2[j]+=((i+1)%10)+'0';
	}
	break;
      }
    }
  }
  for(int i=0;i<w;i++)
    cout<<stick2[i]<<endl;
  return 0;
}