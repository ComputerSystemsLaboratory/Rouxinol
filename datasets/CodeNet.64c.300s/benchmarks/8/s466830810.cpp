#include <iostream>
#include <iomanip>
using namespace std;

void call(int n); 
int main(){

int n;
cin >> n;
call(n);


return 0;
}


void call(int n){
  int i;

  for(i=1;i<=n;i++){
  	int x=i;
  	if(x%3==0){
		cout << " " << i;
  	}else if(x%10==3){
		cout << " " << i;
  	}else{
  		while(x!=0){
  			x /= 10;
  			if(x%10==3){
  					cout << " " << i;
  					break;
  			}
  		}
  	}
  }
  cout << endl;
}