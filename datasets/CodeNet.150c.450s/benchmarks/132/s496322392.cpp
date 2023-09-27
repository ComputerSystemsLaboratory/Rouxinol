#include <iostream>
using namespace std;

int main(){
    int n, p;
    int bowl, pebbles[50];
    int winner;
    cin >> n >> p;
    while(n || p){
        for(int i=0;i<n;++i){
            pebbles[i] = 0;
        }
        bowl = p;
        winner = 1000;
        while(true){
            for(int i=0;i<n;++i){
                if(bowl){
                    ++pebbles[i];
                    --bowl;
                }else{
                    bowl = pebbles[i];
                    pebbles[i] = 0;
                }
                if(pebbles[i] == p){
                    winner = i;
                    break;
                }
            }
            if(winner < 50) break;
        }
        cout << winner << endl;
        cin >> n >> p;
    }
}