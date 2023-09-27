#include <bits/stdc++.h>

using namespace std;

class Dice{

public:
    unique_ptr<vector<int>> nums;

    Dice(int n){
        nums.reset(new vector<int>(6));
    }

    void rotate(char dir){
        int a, b, c, d;
        switch(dir){
        case 'N':
            a = nums->at(0), b = nums->at(1), c = nums->at(5), d = nums->at(4);
            nums->at(0) = b;
            nums->at(1) = c;
            nums->at(5) = d;
            nums->at(4) = a;
            break;
        case 'E':
            a = nums->at(0), b = nums->at(2), c = nums->at(5), d = nums->at(3);
            nums->at(0) = d;
            nums->at(2) = a;
            nums->at(5) = b;
            nums->at(3) = c;
            break;
        case 'W':
            a = nums->at(0), b = nums->at(2), c = nums->at(5), d = nums->at(3);
            nums->at(0) = b;
            nums->at(2) = c;
            nums->at(5) = d;
            nums->at(3) = a;
            break;
        case 'S':
            a = nums->at(0), b = nums->at(1), c = nums->at(5), d = nums->at(4);
            nums->at(0) = d;
            nums->at(1) = a;
            nums->at(5) = b;
            nums->at(4) = c;
            break;
        }
    }

};

int main()
{

    Dice d(6);
    for(int i = 0; i < 6; i++){
        cin >> d.nums->at(i);
    }
    string s;
    cin >> s;
    for(char c: s){
        d.rotate(c);
    }
    cout << d.nums->at(0) << endl;
}
