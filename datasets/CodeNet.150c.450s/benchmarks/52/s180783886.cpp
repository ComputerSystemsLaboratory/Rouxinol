#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int car[100],num,i=0;
	while(cin>>num){
		if(num==0){
			i--;
			cout<<car[i]<<endl;
		}else{
			car[i]=num;
			i++;
		}
	}
	return 0;
}