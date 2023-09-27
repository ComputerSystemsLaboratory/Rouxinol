#include<iostream>
#include<cstdlib>
#include<cstring>;

using namespace std;

int main(){
	int t_num, h_num, sw_taro = 101, sw_hana = 101;
	int t_tot = 0, h_tot = 0, tmp, taro[100], hana[100];
	bool found = false;
	while (true){
		memset(taro, 0, sizeof(taro));
		memset(hana, 0, sizeof(hana));
		cin >> t_num >> h_num;
		if (t_num == 0)
			break;
		for (int i = 0; i < t_num; i++){
			cin >> taro[i];
			t_tot += taro[i];
		}
		for (int i = 0; i < h_num; i++){
			cin >> hana[i];
			h_tot += hana[i];
		}
		for (int i = 0; i < t_num; i++){
			tmp = taro[i];
			for (int j = 0; j < h_num; j++){
				if ((t_tot - tmp+hana[j]) == (h_tot - hana[j] + tmp))
				if ((taro[i] + hana[j]) < (sw_taro + sw_hana)){
					found = true;
					sw_taro = taro[i];
					sw_hana = hana[j];
				}
			}
		}
		if (found){
			cout << sw_taro << " " << sw_hana << endl;
		}
		else
			cout << "-1\n";
		found = false;
		sw_taro = 101;
		sw_hana = 101;
		h_tot = 0;
		t_tot = 0;
	}
	return 0;
}