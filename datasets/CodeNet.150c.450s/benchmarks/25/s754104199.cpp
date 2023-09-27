#include<iostream>
using namespace std;
#include<string>

int main()
{
    string stc;
    int x[26];
    int i;

    for(i = 0; i < 26; i++) x[i] = 0;

    do{
        getline(cin, stc);
        if(!(stc[0])) break;

        for(i = 0; stc[i]; i++){
            if((stc[i] >= 'a') && (stc[i] <= 'z')){
                x[stc[i] - 'a'] = x[stc[i] - 'a'] + 1;
            }else if((stc[i] >= 'A') && (stc[i] <= 'Z')){
                x[stc[i] - 'A'] = x[stc[i] - 'A'] + 1;
            }else{
                continue;
            }
        };

    }while(1);

    for(i = 0; i < 26; i++){
        cout << char('a' + i) << " : " << x[i] << endl;
    };

    return 0;
}