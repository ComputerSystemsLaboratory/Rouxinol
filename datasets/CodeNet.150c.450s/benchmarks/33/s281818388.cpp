#include <iostream>
using namespace std;

int main()
{
	int x,y,s,temp;
	while(cin >> x >> y >> s,x || y || s){
		temp = 0;
		for(int i = 1;i <= s;i++){
			for(int j = 1;j < i;j++){
				if(j*(100+x)/100+(i-j)*(100+x)/100 == s){
					if(j*(100+y)/100+(i-j)*(100+y)/100 > temp)
					temp = j*(100+y)/100+(i-j)*(100+y)/100;
				}
			}
		}
		cout << temp << endl;
	}
	return 0;
}