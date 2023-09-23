#include <iostream>

using namespace std;

int debug = 0;

class ANumber{
private:
	int have[10];
	int place[10];
	int hit;
	int blow;
public:
	ANumber(){
		int i;
		for(i=0;i<=9;i++){
			have[i] = 0;
			place[i] = 0;
		}
		hit = 0;
		blow = 0;
	}

	void clearNum(){
		int i;
		for(i=0;i<=9;i++){
			have[i] = 0;
			place[i] = 0;
		}
		hit = 0;
		blow = 0;
		if(debug) cout << "all reset! " << hit << " " << blow << endl;
	}

	void addNum(int num, int placeNum){
		have[num] = 1;
		place[num] = placeNum;
		if(debug) cout << num << "is placed #" << placeNum << endl;
	}

	void chkNum(int b1, int b2, int b3, int b4){
		if(debug) cout <<"chk"<< b1 << b2 << b3 << b4 << endl;
		if(have[b1] == 1){
			if(place[b1] == 1){
				if(debug) cout << "b1 hit" <<endl; 
				hit++;
			}else{
				if(debug) cout << "b1 blow" <<endl;
				blow++;
			}
		}
		if(have[b2] == 1){
			if(place[b2] == 2){
				if(debug) cout << "b2 hit" <<endl;
				hit++;
			}else{
				if(debug) cout << "b2 blow" <<endl;
				blow++;
			}
		}
		if(have[b3] == 1){
			if(place[b3] == 3){
				if(debug) cout << "b3 hit" <<endl;
				hit++;
			}else{
				if(debug) cout << "b3 blow" <<endl;
				blow++;
			}
		}
		if(have[b4] == 1){
			if(place[b4] == 4){
				if(debug) cout << "b4 hit" <<endl;
				hit++;
			}else{
				if(debug) cout << "b4 blow" <<endl;
				blow++;
			}
		}

		cout << hit << " " << blow << endl;
	}
};

int main(void){
	ANumber A;
	int a1, a2, a3, a4;
	int b1, b2, b3, b4;

	while(cin >> a1 >> a2 >> a3 >> a4){
		A.addNum(a1, 1);
		A.addNum(a2, 2);
		A.addNum(a3, 3);
		A.addNum(a4, 4);
		cin >> b1 >> b2 >> b3 >> b4;
		A.chkNum(b1, b2, b3, b4);
		A.clearNum();
	}

	return 0;
}