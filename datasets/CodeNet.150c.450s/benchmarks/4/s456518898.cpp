#include<iostream>
using namespace std;

int main()
{
    int m, f, r;
    for(int i=0; ; i++){
        cin >> m >> f >> r;
        if(m==-1 && f==-1 && r==-1)  break;
        int a = m+f;
        if(a>=80) cout << 'A' << endl;
        else if(a>=65 && a<80) cout << 'B' << endl;
        else if(a>=50 && a<65) cout << 'C' << endl;
        else if(a>=30 && a<50 && r>=50) cout << 'C' << endl;
        else if(m==-1 || f==-1) cout << 'F' << endl;
        else if(a>=30 && a<50) cout << 'D' << endl;
        else if(a<30) cout << 'F' << endl;
    }
}