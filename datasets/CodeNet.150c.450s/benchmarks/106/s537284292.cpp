#include <iostream>
using namespace std;
int main(){

   int a,b,c;
   int output;
   output=0;
   cin>>a>>b>>c;
   for(int i=a;i<=b;i++){
	   if(c%i==0){
		   output+=1;
	   }
   }
   cout<<output<<endl;

	return 0;
}