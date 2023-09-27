#include <iostream>
#include <vector>


using namespace std;

int main(){
	int n;
	
	while(cin>>n){
		vector<int> prime(n);
		int ptr=0;
		if(n<=3){
		switch(n){
		case 0:
		case 1: ptr=0; break;
		case 2: ptr=1; break;
		case 3: ptr=2; break;
		}
		}
		else{
			prime[ptr++]=2;
			prime[ptr++]=3;
		
		for(int no=5;no<=n;no+=2){
			int flag=0;
			for(int i=1;prime[i]*prime[i]<=no;i++){
		if(no%prime[i]==0){
				flag=1;
				break;
		}
	}
	if(!flag)
		prime[ptr++]=no;
	}
		}
		cout<<ptr<<endl;
	}
	
	
	
}