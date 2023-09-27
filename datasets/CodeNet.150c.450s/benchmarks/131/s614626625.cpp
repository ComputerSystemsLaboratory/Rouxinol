#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int a0;
  int L;
  int p;
  
  while(cin>>a0>>L,a0,L){
    vector<int> a(20);
    int result_a1,result_a2;
    int result;
    bool flag=false;

    a.clear();
    
    a[0]=a0;
    int hozon=a[0];

    for(int j=1;j<=20;++j){
      vector<int> temp;
      int max=0;
      int min=0;
      
      temp.clear();
      
      for(int i=0;i<L;++i){
	temp.push_back(hozon%10);
	hozon=hozon/10;
      }
      
      sort(temp.begin(),temp.end(),greater<int>());
      
      p=1;
      for(auto i:temp){
	min+=i*p;
	p=p*10;
      }
      
      sort(temp.begin(),temp.end());
      
      p=1;
      for(auto i:temp){
	max+=i*p;
	p=p*10;
      }

      a[j]=max-min;
      
      for(int i=0;i<j;++i){
	if(a[i]==a[j]){
	  flag=true;
	  result_a1=i;
	  result_a2=j;
	  result=a[j];
	  break;
	}
      }
      if(flag==true) break;
      else hozon=max-min;
    }
    cout<<result_a1<<" "<<result<<" "<<result_a2-result_a1<<endl;
  }
}