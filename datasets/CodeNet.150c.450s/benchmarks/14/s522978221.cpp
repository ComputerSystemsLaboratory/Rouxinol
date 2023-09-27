#include <iostream>
using namespace std;

void call(int n){
	bool end_check_num=false;
	int i=1,x;
	while(1){//check_num
		while(1){//end_check_num
			x=i;
			if(x%3==0){
				cout<<" "<<i;
				break;//goto end_check_num
			}
			while(1){//include3
				if(x%10==3){
					cout<<" "<<i;
					end_check_num=true;
					break;//goto end_check_num
				}
				if(end_check_num) break;
				x/=10;
				if(x==0) break;//goto include3
			}
			break;
		}
		//end_check_num
		end_check_num=false;
		if(++i>n) break;
	}
	cout<<endl;
}

int main(){
	int n=0;
	cin>>n;
	call(n);
	return 0;
}