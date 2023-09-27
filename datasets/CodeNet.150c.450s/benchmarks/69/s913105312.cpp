#include <iostream>
#include <vector>
using namespace std;
int main(){

  int blank,n,num[10],i;
  vector <int> a,b;

  cin>>n;
  for(int j=0;j<n;j++){
  for(i=0;i<10;i++) cin>>num[i];
  blank=0;
  a.clear();
  b.clear();
  a.push_back(0);
  b.push_back(0);
  for(i=0;i<10;i++){

    if(num[i]>a.back() && num[i]>b.back()){
      if(a.back()<=b.back()){
	b.push_back(num[i]);
	continue;
      }
      else {
	a.push_back(num[i]);
	continue;
      }
    }

    if(num[i]>a.back()){
      	a.push_back(num[i]);
	continue;
    }
      if(num[i]>b.back()){
      	b.push_back(num[i]);
	continue;
    }
      
      blank=1;
      break;

  }

  if(blank==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
  
  return 0;

}
	     
  