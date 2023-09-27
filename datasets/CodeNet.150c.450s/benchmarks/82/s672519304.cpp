#include<iostream>
#include<string>
using namespace std;

class dice{
	public:
	int d[6];
	void rolls(string str){
		for(int i = 0; str[i] != '\0'; i++)
			roll(str[i]);
	}
	void roll(char in){//4 2 1 6 5 3
		int direc[4][6]={
			{1,5,2,3,0,4},//n
			{3,1,0,5,4,2},//e
			{4,0,2,3,5,1},//s
			{2,1,5,0,4,3}//w
		};
		int news;
		int temp_d[6];
		if(in =='N')news = 0;
		if(in =='E')news = 1;
		if(in =='S')news = 2;
		if(in =='W')news = 3;
		for(int i = 0;i < 6;i++)
			temp_d[i] = d[direc[news][i]];
		for(int i = 0;i < 6;i++)
			d[i] = temp_d[i];
	}
	void print(void){
		for(int i = 0;i < 6; i++){
			cout << d[i];
			if(i==6-1)cout << endl;
			else cout << " ";
		}
	}
};

int main(){
	dice d1;
	int q;
	string str;
	int ue, mae;
	int index;
	for(int i = 0;i < 6; i++)
		cin >> d1.d[i];
	cin >> q;
	for(int t = 0; t < q; t++){
		cin >> ue >> mae;
		for(int i = 0;i < 6; i++){
			if(d1.d[i] == ue)index = i;
		}
		char cmd[6][4]={"", "N", "W", "E", "S", "SS"};
		d1.rolls(cmd[index]);
		for(int i = 0;i < 6; i++){
			if(d1.d[i] == mae)index = i;
		}
		char cmd2[6][5]={"", "", "ENW", "NES", "ESSW", ""};
		d1.rolls(cmd2[index]);
		cout << d1.d[2] << endl;
	}
    return 0;
}