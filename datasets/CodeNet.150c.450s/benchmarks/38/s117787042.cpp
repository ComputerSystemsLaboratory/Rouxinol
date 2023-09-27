#include<iostream>
using namespace std;
int main(){
   int n,a,b,c,t;

   cin >> n;
   for(int i=0;i<n;i++){
	cin >> a >> b >> c;
	if(a > b){
		t = a;
		a = b;
		b = t;
	}
	if(b > c){
		t = b;
		b = c;
		c = t;
	}
	if(a > c){
		t = a;
		a = c;
		c = t;
	}

	if((a*a+b*b) == c*c){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

   }

   return 0;
}