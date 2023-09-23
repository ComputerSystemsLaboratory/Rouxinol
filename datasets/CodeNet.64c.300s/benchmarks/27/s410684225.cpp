#include<iostream>
using namespace std;
 
int main(){
	int num,ans,pat;
	while(1){
		cin >> num >> ans;
		if(num == 0 && ans == 0){
			break;
		}
		pat = 0;
		for(int x = 1;x < num + 1;x++){
			for(int y = x + 1;y < num + 1;y++){
				for(int z = y + 1;z < num + 1;z++){
					if((x + y + z) == ans){
						pat++;
					}
				}
			}
		}
		cout << pat << endl;
	}

	return 0;
}