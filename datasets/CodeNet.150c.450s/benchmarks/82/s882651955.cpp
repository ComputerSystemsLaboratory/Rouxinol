#include <iostream>
using namespace std;
class Dice{
public:
    int f[6];
    int right(int up, int fr){
        if(f[0] == up && f[1] == fr || f[1] == up && f[5] == fr || f[5] == up && f[4] == fr || f[4] == up && f[0] == fr) return f[2];
        else if(f[0] == up && f[2] == fr || f[2] == up && f[5] == fr || f[5] == up && f[3] == fr || f[3] == up && f[0] == fr) return f[4];
        else if(f[0] == up && f[3] == fr || f[3] == up && f[5] == fr || f[5] == up && f[2] == fr || f[2] == up && f[0] == fr) return f[1];
        else if(f[0] == up && f[4] == fr || f[4] == up && f[5] == fr || f[5] == up && f[1] == fr || f[1] == up && f[0] == fr) return f[3];
        else if(f[1] == up && f[2] == fr || f[2] == up && f[4] == fr || f[4] == up && f[3] == fr || f[3] == up && f[1] == fr) return f[0];
        else if(f[2] == up && f[1] == fr || f[1] == up && f[3] == fr || f[3] == up && f[4] == fr || f[4] == up && f[2] == fr) return f[5];
    }
};
int main(){
    Dice d;
    for(int i = 0; i < 6; i++){
        cin >> d.f[i];
    }
    int q;
    cin >> q;
    int up, fr;
    for(int i = 0; i < q; i++){
        cin >> up >> fr;
        cout << d.right(up, fr) << endl;
    }
}

