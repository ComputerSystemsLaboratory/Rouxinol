#include <iostream>
using namespace std;
int main(){

   int x,y;
   int big,small;
   while(1){
	   cin>>x>>y;
	   if(x==0 && y==0){
		   break;
	   }else{
		   if(x>y){
			   big=x;
			   small=y;
		   }else{
			   big=y;
			   small=x;
		   }
		   cout<<small<<" "<<big<<endl;
	   }
   }

	return 0;
}