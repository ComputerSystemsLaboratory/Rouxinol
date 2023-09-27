#include <bits/stdc++.h>

using namespace std;

class Dice{

public:
    unique_ptr<vector<int>> nums;
    unique_ptr<vector<vector<int>>> all;

    Dice(int n){
        nums.reset(new vector<int>(6));
        all.reset(new vector<vector<int>>(24, vector<int>(6)));
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

    void print_pattern(int i){
        for(int j = 0; j < 6; j++){ cout << " " << all->at(i).at(j); }
        cout << endl;
    }

    void rotate_all(){
        int i = 0;
        for(;i < 4; i++){
            for(int j = 0; j < 6; j++){ all->at(i).at(j) = nums->at(j); }
            rotate('E');
        }
        rotate('N');
        for(;i < 8; i++){
            for(int j = 0; j < 6; j++){ all->at(i).at(j) = nums->at(j); }
            rotate('E');
        }
        rotate('N');
        for(;i < 12; i++){
            for(int j = 0; j < 6; j++){ all->at(i).at(j) = nums->at(j); }
            rotate('E');
        }
        rotate('N');
        for(;i < 16; i++){
            for(int j = 0; j < 6; j++){ all->at(i).at(j) = nums->at(j); }
            rotate('E');
        }
        rotate('N');

        rotate('W');
        rotate('S');

        for(;i < 20; i++){
            for(int j = 0; j < 6; j++){ all->at(i).at(j) = nums->at(j); }
            rotate('E');
        }

        rotate('N');
        rotate('N');

        for(;i < 24; i++){
            for(int j = 0; j < 6; j++){ all->at(i).at(j) = nums->at(j); }
            rotate('E');
        }
    }

};

int main()
{
    Dice d(6);
    for(int i = 0; i < 6; i++){
        cin >> d.nums->at(i);
    }
    d.rotate_all();

    int n;
    cin >> n;
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        for(int i = 0; i < d.all->size(); i++){
            if(d.all->at(i).at(0) == a && d.all->at(i).at(1) == b){
                cout << d.all->at(i).at(2) << endl;
                break;
            }
        }
    }
}
