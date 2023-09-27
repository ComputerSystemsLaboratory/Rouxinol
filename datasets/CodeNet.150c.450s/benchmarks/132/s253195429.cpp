#include <iostream>
using namespace std;

int main(){
     int n,p;
     while(cin>>n>>p,n||p){
	  int step=0;
	  int temoto[n];
	  int wan=p;
	  for(int i=0;i<n;i++)temoto[i]=0;
	  while(1){
	       if(wan>0){
		    --wan;
		    ++temoto[step%n];
	       } else {
		    wan+=temoto[step%n];
		    temoto[step%n]=0;
	       }
	       if(temoto[step%n]==p){
		    break;
	       }
	       ++step;
	  }
	  cout<<step%n<<endl;
     }
}