#include <iostream>
using namespace std;
#define MAX 50

int main(int argc, char const *argv[])
{
    int n, p;
    int candidate[MAX];

    while (cin>>n>>p, n&&p){
        int remains = p;
        int turn = 0;
        int winner = -1;
        for (int i = 0; i < MAX; i++){
            candidate[i] = 0;
        }
        while (1){
            if (remains > 0){
                candidate[turn]++;
                remains--;
            }
            else{
                remains += candidate[turn];
                candidate[turn] = 0;
            }

            if (candidate[turn] == p){
                winner = turn;
                break;
            }
            turn++;
            turn%=n;
        }
        cout<<winner<<endl;
    }
    
    return 0;
}