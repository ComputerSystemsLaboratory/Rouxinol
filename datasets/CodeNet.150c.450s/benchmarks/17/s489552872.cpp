#include<iostream>
using namespace std;

int main(){
   int a,b,c,d,e,t;
   cin >> a >> b >> c >> d >> e;

   for(int i=0; i<25; i++){
	   if(b > a){
		t = a;
		a = b;
		b = t;
	   }else if(c > b){
		t = b;
		b = c;
		c = t;
	   }else if(d > c){
		t = c;
		c = d;
		d = t;
	   }else if(e > d){
		t = d;
		d = e;
		e = t;
	   }
   }

   cout << a << " " << b << " " << c << " " << d << " " << e << endl;

   return 0;
}