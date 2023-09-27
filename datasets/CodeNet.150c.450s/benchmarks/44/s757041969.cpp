#include <iostream>
using namespace std;

struct data{
	int num;
	int counted;
};

int main(){
	data a[4];
	data b[4];
	while(cin >> a[0].num >> a[1].num >> a[2].num >> a[3].num
		>> b[0].num >> b[1].num >> b[2].num >> b[3].num)
	{
		int hit = 0;
		int blow = 0;
		for(int i = 0; i < 4; i++){
			a[i].counted = 1;
			b[i].counted = 1;
		}
		for(int j = 0; j < 4; j++){
			if(a[j].num == b[j].num){
				a[j].counted = b[j].counted = 0;
				hit++;
			}
		}
		for(int k = 0; k < 4; k++){
			for(int l = 0; l < 4; l++){
				if(a[k].counted == 1 && b[l].counted == 1){
					if(a[k].num == b[l].num){
						a[k].counted = b[l].counted = 0;
						blow++;
					}
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}