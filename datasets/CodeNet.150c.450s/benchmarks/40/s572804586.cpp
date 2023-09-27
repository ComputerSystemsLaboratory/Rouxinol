#include<iostream>
using namespace std;
#include<stdio.h>

class dice {
        private:
                int temp_t;
                int temp_e;
                int temp_s;
                int temp_b;
                int temp_w;
                int temp_n;
        public:
                int top;
                int east;
                int south;
                int bottom;
                int west;
                int north;

                dice(int _top, int _east, int _south, int _bottom, int _west, int _north);
                void roll(char dir);
                ~dice();
};

dice::dice(int _top, int _east, int _south, int _bottom, int _west, int _north){
        top = _top;
        east = _east;
        south = _south;
        bottom = _bottom;
        west = _west;
        north = _north;
}

void dice::roll(char dir){
        switch (dir){
                case 'N':
                        temp_n = north;
                        temp_t = top;
                        temp_s = south;
                        temp_b = bottom;
                        north = temp_t;
                        bottom = temp_n;
                        south = temp_b;
                        top = temp_s;
                        break;
                case 'S':
                        temp_n = north;
                        temp_t = top;
                        temp_s = south;
                        temp_b = bottom;
                        north = temp_b;
                        bottom = temp_s;
                        south = temp_t;
                        top = temp_n;
                        break;
                case 'E':
                        temp_e = east;
                        temp_t = top;
                        temp_w = west;
                        temp_b = bottom;
                        east = temp_t;
                        bottom = temp_e;
                        west = temp_b;
                        top = temp_w;
                        break;
                case 'W':
                        temp_e = east;
                        temp_t = top;
                        temp_w = west;
                        temp_b = bottom;
                        east = temp_b;
                        bottom = temp_w;
                        west = temp_t;
                        top = temp_e;
                        break;
                default:
                        cout << "Unknown Roll Command. Quit." << endl;
                        break;
        }
}

dice::~dice(){}

int main(){
        char ch;
        int N, T, E, W, B, S;
        cin >> T >> S >> E >> W >> N >> B;
        scanf("%c", &ch);
        dice diceA(T, E, S, B, W, N);
        for(int i = 0; i < 100; i++) {
                scanf("%c", &ch);
                if(ch == '\n') break;
                diceA.roll(ch);
        }
        cout << diceA.top << endl;
}