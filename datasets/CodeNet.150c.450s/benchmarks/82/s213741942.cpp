#include<iostream>
using namespace std;

class Dice{
	int _num[6];
	public:
		void set(int num[6]){
			for(int i = 0; i < 6; i++) _num[i] = num[i];
		}
		void N(){
			swap(_num[0],_num[4]);
			swap(_num[0],_num[5]);
			swap(_num[0],_num[1]);
		}
		void S(){
			swap(_num[0],_num[1]);
			swap(_num[0],_num[5]);
			swap(_num[0],_num[4]);
		}
		void W(){
			swap(_num[0],_num[3]);
			swap(_num[0],_num[5]);
			swap(_num[0],_num[2]);
		}
		void E(){
			swap(_num[0],_num[2]);
			swap(_num[0],_num[5]);
			swap(_num[0],_num[3]);
		}
		void printTop(){
			cout << _num[0] << endl;
		}
		void printRight(){
			cout << _num[2] << endl;
		}
		void SetTop(int m){
			if(_num[2] == m) W();
			else if(_num[3] == m) E();
			else{
				while(1){
					if(_num[0] == m) break;
					S();
				}
			}
		}
		void SetFront(int m){
			while(1){
				if(_num[1] == m) break;
				S();
				W();
				N();
			}
		}
};

int main(){
	int num[6];
	for(int i = 0; i < 6; i++) 
		cin >> num[i];
	
	Dice d;
	d.set(num);
	
	int q;
	cin >> q;
	
	for(int i = 0; i < q; i++){
		int top,front;
		cin >> top >> front;
		
		d.SetTop(top);
		d.SetFront(front);
		
		d.printRight();
	}
	return 0;
}