#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector<int> dice;
    int n, a, b, num;
    dice.resize(6);
    cin >> dice[0] >> dice[1] >> dice[2] >> dice[3] >> dice[4] >> dice[5] >> n;
    for (int i=0; i<n; ++i){
        cin >> a >> b;
        if (a == dice[0]){
            if(b == dice[1]){num = dice[2];}
            else if(b == dice[2]){num = dice[4];}
            else if(b == dice[3]){num = dice[1];}
            else if(b == dice[4]){num = dice[3];}
        }
        else if(a == dice[1]){
            if(b == dice[0]){num = dice[3];}
            else if(b == dice[2]){num = dice[0];}
            else if(b == dice[3]){num = dice[5];}
            else if(b == dice[5]){num = dice[2];}
        }
        else if(a == dice[2]){
            if(b == dice[0]){num = dice[1];}
            else if(b == dice[1]){num = dice[5];}
            else if(b == dice[4]){num = dice[0];}
            else if(b == dice[5]){num = dice[4];}
        }
        else if(a == dice[3]){
            if(b == dice[0]){num = dice[4];}
            else if(b == dice[1]){num = dice[0];}
            else if(b == dice[4]){num = dice[5];}
            else if(b == dice[5]){num = dice[1];}
        }
        else if(a == dice[4]){
            if(b == dice[0]){num = dice[2];}
            else if(b == dice[2]){num = dice[5];}
            else if(b == dice[3]){num = dice[0];}
            else if(b == dice[5]){num = dice[3];}
        }
        else if(a == dice[5]){
            if(b == dice[1]){num = dice[3];}
            else if(b == dice[2]){num = dice[1];}
            else if(b == dice[3]){num = dice[4];}
            else if(b == dice[4]){num = dice[2];}
        }
        cout << num << endl;
    }
    return 0;
}

