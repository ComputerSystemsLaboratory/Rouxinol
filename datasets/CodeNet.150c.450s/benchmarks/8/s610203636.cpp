#include <iostream>
using namespace std;
int judge(string card1,string card2);
int main(){
	int n;
	int t_win=0,h_win=0;
	cin>>n;
	for(int i=0;i<n;i++){
		string t_card,h_card;
		cin>>t_card>>h_card;
		switch(judge(t_card,h_card)){
			case  1:t_win+=3;break;
			case -1:h_win+=3;break;
			case  0:t_win++;h_win++;break;
		}
	}
	cout<<t_win<<" "<<h_win<<endl;
	return 0;
}
int judge(string card1,string card2){
	int result=0;
	int index=0;
	while(true){
		if(card1.length()==index||card2.length()==index){
			result=(card1.length()==index?(card2.length()==index?0:-1):1);
			break;
		}else if(card1.at(index)!=card2.at(index)){
			result=card1.at(index)>card2.at(index)?1:-1;
			break;
		}
		index++;
	}
	return result;
}