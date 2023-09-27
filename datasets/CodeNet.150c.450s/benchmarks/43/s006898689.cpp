#include <iostream>
using namespace std;
int result[200] = { 0 };
int main(){
		int num;
		int tmp1, tmp2, sc1 = 0, sc2= 0;
		while (cin >> num){
			sc1 = sc2 = 0;
			if (num == 0)break;
			for (int i = 0; i < num; i++){
				cin >> tmp1 >> tmp2;
				if (tmp1 == tmp2){
					sc1 += tmp1;
					sc2 += tmp2;
				}
				else if (tmp1 > tmp2)
					sc1 += tmp1 + tmp2;
				else if (tmp1 < tmp2)
					sc2 += tmp1 + tmp2;
			}
			cout << sc1 << " " << sc2 << endl;
		}
}