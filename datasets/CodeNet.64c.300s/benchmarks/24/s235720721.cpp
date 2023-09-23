#include<iostream>
using namespace std;
int main(){
   int sam1,sam2,a,b,n;

   while(cin >> n,n !=0){

   sam1 = 0;
   sam2 = 0;

   for(int i=0;i<n;i++){
	cin >> a >> b;

	if(a>b){
		sam1 += a+b;
	}else if(b>a){
		sam2 += a+b;
	}else if(a == b){
		sam1 += a;
		sam2 += b;
	}
   }

   cout << sam1 << " " << sam2 << endl;

   }

   return 0;
}
 
   