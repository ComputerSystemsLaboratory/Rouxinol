#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,num;
    cin >> n;
    int cards[4][13] = {};
    char s;
    for (int i = 0; i < n; ++i)
    {
        cin >> s >> num;
        if(s=='S') cards[0][num-1] = 1;
        if(s=='H') cards[1][num-1] = 1;
        if(s=='C') cards[2][num-1] = 1;
        if(s=='D') cards[3][num-1] = 1;
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            if(i==0 && cards[i][j]==0) cout << "S " << j+1 << endl;
            if(i==1 && cards[i][j]==0) cout << "H " << j+1 << endl;
            if(i==2 && cards[i][j]==0) cout << "C " << j+1 << endl;
            if(i==3 && cards[i][j]==0) cout << "D " << j+1 << endl;
        }
    }

    return 0;
}