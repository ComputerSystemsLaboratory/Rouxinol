#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int stack[10];
	int s_num = 0;
	int x;

	while(cin >> x){
		if(x == 0){
			cout << stack[s_num-1] << endl;
			s_num --;
		}else{
			stack[s_num] = x;
			s_num ++;
		}
	}

	return(0);
}