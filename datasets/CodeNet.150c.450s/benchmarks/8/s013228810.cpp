#include <iostream>
#include <string>

using namespace std;
//string taro[10000]

int main(){
	string t, h;
	int fight;
	int ts=0, hs=0;
	
	cin >> fight;
	
	for(int i=0; i<fight; ++i){
		cin >> t >> h;
		if(t == h){
			++ts;
			++hs;
		}else if(t > h){
			ts += 3;
		}else{
			hs += 3;
		}	
	}
	
	printf("%d %d\n", ts, hs);
}


