#include <iostream>
 
using namespace std;
int main(){
    int A=0;
    int B=0;
	
	int C=0;
	
	int D=0;
	
	
	
     
    int MAX=0;
	int MIN=0;
	
	int MIN2=0;
	int MAX2=0;
    
     
     
    cin >> A >> B ;
     
    if(A>B){
        MAX=A;
		MIN=B;
    }else{
        MAX=B;
		MIN=A;
    }
     
	
	for(int i=0;i<10000;i++){
		if(A<B){
		 MIN2=A;
		 MAX2=B;
		}else{
		 MIN2=B;
		 MAX2=A;
		}
		if(MIN2!=0){
			C=A%B;
			A=B;
			B=C;
		}else{
			i=10000;
		}
	}
	 
	 
	 
   
    cout <<MAX2<<endl;
    return 0;
}