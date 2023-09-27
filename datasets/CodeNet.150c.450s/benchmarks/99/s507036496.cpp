#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int checkMcxi(char c){
    if(c == 'm')
        return 1000;
    if(c == 'c')
        return  100;
    if(c == 'x')
        return   10;
    if(c == 'i')
        return    1;
    else
        return 0;
}

int main(void){
    int n; cin >> n;
    while(n--){
        int dec[] = {0, 0};
        string str[2]; cin >> str[0] >> str[1];
        for(int s = 0; s < 2; s++){
            int multipled = 1;
            for(int i=0; i < str[s].length(); i++){
                int d = checkMcxi(str[s][i]);
                if(d){
                    dec[s] += multipled * d;
                    multipled = 1;
                }else{
                    multipled = str[s][i] - '0';
                }
            }
        }

        stringstream s;
        string ans_dec;
        s << dec[0] + dec[1];
        s >> ans_dec;

        /*DEBUG*/// cout << ans_dec << endl;

        string ans;
        int ind = 0; char mcxi[] = {'i', 'x', 'c', 'm'};
        for(int i=ans_dec.length()-1; i >= 0; i--){
            if(!(ans_dec[i] - '0')){
                ind++;
            }else if(!(ans_dec[i] - '1')){
                ans = mcxi[ind] + ans;
                ind++;
            }else{
                ans = string(1, ans_dec[i]) + mcxi[ind] + ans;
                ind++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}