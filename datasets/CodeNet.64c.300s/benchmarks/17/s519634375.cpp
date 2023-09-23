#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int x,y,s;
	while(cin>>x>>y>>s,x){
		int max_zeigo = 0;
		for(int i=1;i<1000;i++)
			for(int j=1;j<1000;j++){
				int tmp = i * (100 + x)/100 + j * (100+x)/100;
				if(tmp == s)max_zeigo = max(i*(100+y)/100+j*(100+y)/100,max_zeigo);
			}
		cout << max_zeigo << "\n";
	}
	return 0;
}