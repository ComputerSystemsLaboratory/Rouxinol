#include <iostream>
#include <string>
using namespace std;
//---------------------------------------
void tokuten(string t, string h, int &num_t, int &num_h);
//---------------------------------------

int main(void)
{
	int n;  //??????????????°
	int tokuten_taro = 0;
	int tokuten_hanako = 0;
	
	//???????????°?????\???
	cin >> n;
	
	//??????????????±
	for(int i = 0; i < n; i++){
		string card_taro, card_hanako;
		cin >> card_taro;  //1????????§????????????
		cin >> card_hanako; //1????????§????????????
		
		//???????????????
		tokuten(card_taro, card_hanako, tokuten_taro, tokuten_hanako);
	}
	
	//??¨???
	cout << tokuten_taro << ' ' << tokuten_hanako << endl;
	
	return 0;

}

//------------------------------------------------------------
void tokuten(string t, string h, int &num_t, int &num_h){

	int size_m, size_M;
	
	if(t.size() >=  h.size()){
		size_m = h.size();
	}
	else if(t.size() <= h.size()){
		size_m = t.size();
	}
	
	
	for(int i = 0; i < size_m; i++){
	
		if(t[i] > h[i]){
			num_t += 3;
			return;
		}
		else if(h[i] > t[i]){
			num_h += 3;
			return;
		}
	}
	//????????????????????§???????????£?????´???
	if(t.size() > h.size()){
		num_t += 3;
	}
	else if(h.size() > t.size()){
		num_h += 3;
	}
	else{
		num_t += 1;
		num_h += 1;
	}
	
}