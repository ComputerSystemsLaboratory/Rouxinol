#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
 if(a<b){
     if(b<c){
              cout<<a<<" "<<b<<" "<<c<<endl;
             }
     if(b>c){
              if(a<c){
                       cout<<a<<" "<<c<<" "<<b<<endl;
                     }
               else{
                       cout<<c<<" "<<a<<" "<<b<<endl;
                    }
             }
      }
 if(a>b){
	 if(a<c)
	 {cout<<b<<" "<<a<<" " <<c<<endl;
	 }
	 if(a>c){
		 if(b<c){
			 cout<<b<<" "<<c<<" "<<a<<endl;}
		 else{
			 cout<<c<<" "<<b<<" "<<a<<endl;
		 }

	 }

}
}