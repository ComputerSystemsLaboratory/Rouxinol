#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int x,y,s;
	while (cin >> x >> y >> s && x!=0){
		int maximum = 0;
		for (int i=1; i<s; i++){
			for (int j=1; j<s; j++){
				if ((i*(100+x))/100+(j*(100+x))/100==s && ((i*(100+y))/100+(j*(100+y))/100)>maximum){
					maximum=((i*(100+y))/100+(j*(100+y))/100);
				}
			}
		}
		cout << maximum << endl;
	}
}