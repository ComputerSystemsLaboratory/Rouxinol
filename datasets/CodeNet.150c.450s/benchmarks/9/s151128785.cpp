#include <iostream>
#include <string>

using namespace std;


int main(){

	string data,data_copy;
	int m, h;


	for (;;){
		cin >> data;
		if (data == "-")break;
		data_copy = data;
		cin >> m;
		
		for (int i = 0; i < m; i++){
			cin >> h;

			for (int j = 0; j < data.length(); j++){
				if ((j + 1 - h) <= 0){
					data[data.length() - h + j] = data_copy[j];
			
				}
				else{
					data[j - h] = data_copy[j];
							}


			


			}//data?????¨????????????
			for (int j = 0; j < data.length(); j++){
				data_copy[j] = data[j];
			}


		}//?????£??????????????°???????????????
		cout << data << endl;

}





	return 0;
}