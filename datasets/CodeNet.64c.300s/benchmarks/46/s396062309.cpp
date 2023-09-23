#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<climits>
using namespace std;

int a,d,n;


bool input(){
  cin>>a>>d>>n;
  if(a==0&&d==0&&n==0){
	  return false;
  }
  return true;
}

bool prime(int m){
	int i;

	if(m<2)
		return 0;
	else if(m==2)
		return 1;
	if(m%2==0)
		return 0;

	for(i=3; i*i<=m; i=i+2){
		if(m%i==0)
			return 0;
	}
	return 1;
}
		
int solve(){
	int i=0,count=0;
	bool p;
	while(1){
		p=prime(a);
		if(p==1){
			count++;
		}
		if(n==count){
			break;
		}
		a=a+d;
	}
	return a;
}




int main(){
  while(input()){
    cout<<solve()<<endl;
  }
  return 0;
}