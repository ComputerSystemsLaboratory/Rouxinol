#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=false;

int main(){
  int n;
  cin>>n;

  for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    long long cnt=0;
    while(1){
      if(b==1&&c==1)break;
      cnt++;
      c++;
      
      if(a%3==0){
	if(c==21){
	  c=1;b++;
	}
      }else{
	if(b%2==1&&c==21){
	  c=1;b++;
	}else if(b%2==0&&c==20){
	  c=1;b++;
	}
      }
      
      if(b==11){
	b=1;
	a++;
      }
      if(debug)cout<<a<<" "<<b<<" "<<c<<endl;
    }

    for(int j=a;j<1000;j++){
      if(j%3==0)cnt+=200;
      else cnt+=195;
    }
    
    cout<<cnt<<endl;
  }
  
  return 0;
}