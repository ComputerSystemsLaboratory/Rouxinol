#include <iostream>
#include <array>
using namespace std;
int main(){
	array<bool,31> submited;
	submited.fill(false);
	for (int i = 0; i < 28; i++) {
		int a;
		cin>>a;
		submited[a] = true;
	}
	for (int i = 1; i <= 30; i++)
		if(!submited[i])cout<<i<<endl;
	return 0;
}