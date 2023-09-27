#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
#include <cstdio> 
#include <functional> 
#include <set> 
#include <sstream> 

using namespace std; 

#define MP make_pair

long gcd(long a, long b){ 

  if(a%b==0) return b; 
  else return gcd(b,a%b); 

} 

long lcm(long a, long b){ 
  return a*b/gcd(a,b); 
} 

int main(){

	while(1){

		int x,y,s;
		cin>>x>>y>>s;
		if(((x|y)|s)==0) break;

		int res=0;
		for(int a=1;a<s;a++){
			for(int b=1;b<s;b++){
				int vx=a*(100+x)/100 + b*(100+x)/100;
				int vy=a*(100+y)/100 + b*(100+y)/100;

				if(vx==s && res<vy) res=vy;
			}
		}
		cout<<res<<endl;
	}

	return 0;
}