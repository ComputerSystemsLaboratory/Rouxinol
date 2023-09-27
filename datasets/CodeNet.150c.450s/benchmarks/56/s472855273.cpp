#include<iostream>
using namespace std;
int main(){
   int i,n,x;
   long long max,min,sam;
   sam = 0;

   cin >> n;

   cin >> x;

   sam += x;
   min = x;
   max = x;

   for(i=1; i<n; i++){
	cin >> x;

	sam += x;

	if(x <= min){
		min = x;
	}else if(x >= max){
		max = x;
	}
   }

   cout << min << " " << max << " " << sam << endl;

   return 0;
}

	