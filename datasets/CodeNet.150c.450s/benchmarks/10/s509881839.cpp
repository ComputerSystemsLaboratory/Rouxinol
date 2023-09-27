#include<iostream>
#include<array>
using namespace std;

int main(){
    const int room = 10;
    const int floor = 3;
    const int building = 4;
    array<array<array<int, room>, floor>, building> n_person = {0};

    int n;
    cin >> n;

    for (int i=0; i!=n; ++i){
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        n_person[b-1][f-1][r-1] += v;
    }

    int b = 0;
    for (auto bs: n_person){
        b += 1;
        for (auto fs: bs){
            for (auto r: fs){
                cout << ' ' << r;
            }
            cout << endl;
        }
        if (b!=building){
            cout << "####################" << endl;
        }
    }

    return 0;
}