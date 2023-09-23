#include<iostream>
#include<vector>
#include<queue>

using namespace std;


int main(){
	while(1){
		int x,y,s; cin >> x >> y >> s;
		if (x + y + s == 0) break;
		int max = -1;
		for (int i = 1; i <= 1000; i++){
			for (int j = 1; j <= 1000; j++){
				if (i + j > s) break;
				int item1 = (double)(i * (100+x)/100);
				int item2 = (double)(j * (100+x)/100);;
				if (item1 + item2 == s){
					int item3 = (double)(i * (100+y)/100);
					int item4 = (double)(j * (100+y)/100);
					if (max < item3 + item4){
						max = item3 + item4;
					}
				}
			}
		}
		cout << max << endl;
	
	}
return 0;
}