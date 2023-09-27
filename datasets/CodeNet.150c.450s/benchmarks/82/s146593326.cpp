#include<iostream>

using namespace std;

class dice {

public:

	int TOP, S, E, W, N, BOTTOM, tmp;

	void rotN () {
		tmp = N;
		N = TOP; TOP = S; S = BOTTOM, BOTTOM = tmp;
	}
	void rotE () {
		tmp = E;
		E = TOP; TOP = W; W = BOTTOM; BOTTOM = tmp;
	}
	void rotW () {
		tmp = W;
		W = TOP; TOP = E; E = BOTTOM; BOTTOM = tmp;
	}
	void rotS () {
		tmp = S;
		S = TOP; TOP = N; N = BOTTOM; BOTTOM = tmp;
	}
	void clockwise () {
		tmp = W;
		W = S; S = E; E = N; N = tmp;
	}
	void antiClockwise () {
		tmp = W;
		W = N; N = E; E = S; S = tmp;
	}
};


int main(){

    int num, i, dice_num[6];
    int n, top_num, s_num;

    for(i=0;i<6;i++){
        cin >> num;
        dice_num[i] = num;
    }

    dice dice = {dice_num[0], dice_num[1], dice_num[2], dice_num[3], dice_num[4], dice_num[5]};

    cin >> n;

    for(i=0;i<n;i++){

        cin >> top_num >> s_num;

        int j = 0;

        while(dice.TOP != top_num){
            dice.rotN();
            // cout << "rotN" << endl;
            j++;
            if(j == 4){
                dice.rotE();
                // cout << "rotE" << endl;
            }
        }

        while(dice.S != s_num){
            dice.clockwise();
            // cout << "clockwise" << endl;
        }

        cout << dice.E << endl;

    }

    return 0;

}
