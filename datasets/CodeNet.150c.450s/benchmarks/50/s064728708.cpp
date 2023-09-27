#include<iostream>

using namespace std;

int main(){
	int input;//テ・ツ?・テ・ツ環崚ァツ板ィ
	int en[] = {500,100,50,10,5,1};//テァツ。ツャティツイツィテ」ツ?ョテァツィツョテゥツ。ツ?
	
	while(1){
		cin >> input;//テ・ツ?・テ・ツ環?
		
		if(input == 0) break;
		
		int cnt=0;
		int oturi=1000-input;
		
		for(int i=0;i<6;i++){
			cnt+=oturi/en[i];
			oturi=oturi%en[i];
		}
		cout<<cnt<<endl;
	}
	return 0;
}