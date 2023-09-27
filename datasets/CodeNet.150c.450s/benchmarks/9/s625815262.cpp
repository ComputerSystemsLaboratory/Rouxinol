#include<iostream>
using namespace std;
#include<string>

int main()
{
    string seq;
    int m, i, h, len;

    while(1){
        cin >> seq;
        if(seq == "-") break;
        len = 0;
        for(i = 0; seq[i]; i++) len++;
        cin >> m;
        for(i = 0; i < m; i++){
            cin >> h;
            seq = seq.substr(h, len - h) + seq.substr(0, h);
        }
        cout << seq << endl;
    };

    return 0;
}