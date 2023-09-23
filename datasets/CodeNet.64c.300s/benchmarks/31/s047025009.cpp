//2006
#include<iostream>
using namespace std;
int main(void){
	int i,s[31]={0},a=0;
	for(i=1;i<29;i++){
		cin>>a;
		s[a]=1;
	}
	for(i=1;i<31;i++){
		if(s[i]!=1)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}//vuin @icloud.com,@gmail.com
