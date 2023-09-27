#include <iostream>

using namespace std;

bool card[4][13];
char suits[4] = {'S', 'H', 'C', 'D'};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, num;
    char suit;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>suit>>num;
        if(suit=='S') card[0][num-1]=true;
        if(suit=='H') card[1][num-1]=true;
        if(suit=='C') card[2][num-1]=true;
        if(suit=='D') card[3][num-1]=true;
    }
    for(int i=0; i<4; i++) {
        for(int j=0; j<13; j++) {
            if(card[i][j]==false) {
                cout<<suits[i]<<' '<<j+1<<'\n';
            }
        }
    }
    return 0;
}