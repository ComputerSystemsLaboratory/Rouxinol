#include <iostream>
#include <string>

using namespace std;
int main(){

	while(1){
		int num;
		
		cin >> num;
		if(num == 0){
			return 0;
		}
		
		bool lu = false;
		bool ru = false;
		int time = 0;
		bool u = false;
		
		for(int i=0; i<num; ++i){
			string dat;
			cin >> dat;
			
			if( dat == "lu" ){
				lu = true;
			}
			if( dat == "ru" ){
				ru = true;
			}
			if( dat == "ld" ){
				lu = false;
			}
			if( dat == "rd" ){
				ru = false;
			}
			
			if( lu==true && ru==true && u==false ){
				u = true;
				time++;
			}
			if( lu==false && ru==false && u==true ){
				u = false;
				time++;
			}
		}
		cout << time << endl;		
		
	}


}