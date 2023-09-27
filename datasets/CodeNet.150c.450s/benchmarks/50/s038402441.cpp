#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int kane;
int oturi[6]={500,100,50,10,5,1};
int mai;

int main(){
	while(1){
		mai=0;
		cin>>kane;
		if(kane==0) break;
		kane=1000-kane;
		for(int i=0;i<6;i++){
			mai+=(kane/oturi[i]);
			kane%=oturi[i];
		}
		cout<<mai<<endl;
	}
		
	return 0;
}