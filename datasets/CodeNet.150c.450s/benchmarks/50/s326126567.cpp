#include<iostream>
using namespace std;

int main() {
	int input;							//テ・ツ?・テ・ツ環崚ァツ板ィ
	int yen[] = {500,100,50,10,5,1};	//テァツ。ツャティツイツィテ」ツ?ョテァツィツョテゥツ。ツ?
	
	while(1) {
		cin >> input;	//テ・ツ?・テ・ツ環?
		if(input == 0) break;

		int ans = 0;
		input = 1000 - input;
		while(input > 0) {

			for(int i = 0; i < 6; i++) {
				if (input >= yen[i]) {
					input -= yen[i];
					ans++;
					break;
				} 
			}

		}

		cout << ans << endl;
		
	}
	return 0;
}