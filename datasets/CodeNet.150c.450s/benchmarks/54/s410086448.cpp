#include<iostream>
using namespace std;
#include<string>

int main()
{
    string W, T;
    int count = 0;
    int i, len;
    bool exist = true;

    cin >> W;
    len = 0;
    for(i = 0; W[i]; i++) len++;

    while(1){
        cin >> T;
        if(T == "END_OF_TEXT") break;

        for(i = 0; T[i] && (i < len); i++){
            exist = true;
            if((T[i] != W[i]) && (T[i] != W[i] - 32) && (T[i] != W[i] + 32)){
                exist = false;
                break;
            }
        }
        if((i == len) && (!T[i]) && (exist == true)) count++;
    };

    cout << count << endl;

    return 0;
}