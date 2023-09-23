#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m,f,r,sum;
    while(1) {
        cin >> m >> f >> r;
        sum = m + f;
        if(m==-1 && f==-1 && r==-1) break;
        else if(m==-1 || f==-1) cout << 'F' << endl;
        else if(sum>=80) cout << 'A' << endl;
        else if(80>sum && sum>=65) cout << 'B' << endl;
        else if(65>sum && sum>=50) cout << 'C' << endl;
        else if(50>sum && sum>=30 && r>=50) cout << 'C' << endl;
        else if(50>sum && sum>=30 && r<50) cout << 'D' << endl;
        else if(sum<30) cout << 'F' << endl;
    }

    return 0;
}