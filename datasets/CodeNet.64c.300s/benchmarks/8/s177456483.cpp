#include <iostream>
using namespace std;
int i=1,x,n;

void checkNum(void);
void include3(void);
void endCheckNum(void);

void checkNum(void){
	x=i;
  if(x%3 == 0){
		cout<<" "<<i;
		endCheckNum();
  }else{
		include3();
	}
}

void include3(void){
	if(x%10 == 3){
		cout<<" "<<i;
		endCheckNum();
	}else{
		x/=10;
		if(x>0){
			include3();
		}else{
			endCheckNum();
		}
	}
}

void endCheckNum(void){
	if(++i<=n){
		checkNum();
	}
}

int main(){

	cin>>n;
	checkNum();
  cout<<endl;

	return 0;
}