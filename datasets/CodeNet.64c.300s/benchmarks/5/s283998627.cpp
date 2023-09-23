#include<iostream>
using namespace std;

int main(){
	int suchi,high=0,middle=0,low=0,i,flag=0,a,b,c;
	
	for(i=0;i<10;i++){
		cin>>suchi;
			
		if(flag==0){
			high = suchi;
			flag++;
			}
			
		else{
			if(suchi<low);
			
			else if(suchi>=low&&suchi<middle)
				low = suchi;
			
			else if(suchi>=middle&&suchi<high){
				low = middle;
				middle = suchi;
			}else{
				low = middle;
				middle = high;
				high = suchi;
				}
				
			}
	}
	
	cout<<high<<endl;
	cout<<middle<<endl;
	cout<<low<<endl;
	
	return 0;
}