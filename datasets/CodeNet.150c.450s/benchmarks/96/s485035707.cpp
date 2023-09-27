#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    string inp;
    int n;
    cin >> n;
    while(n--){
        cin >> inp;
            inp.append(1, '0');
        bool head = true;
        char headNum;
        int count;
        for(int i = 0; inp[i]; i++){
            if((inp[i - 1] == '0' && inp[i] == '0') || (i == 0 && inp[i] == '0')) continue;
            if(head){
                headNum = inp[i];
                count = 0;
                head = false;
            }
            if(headNum == inp[i] && headNum != '0'){
                count++;
            }else{
                char outp;
                if(headNum == '1'){
                    count %= 5;
                    if(count == 0) count = 5;
                    if(count == 1) outp = '.';
                    else if(count == 2) outp =',';
                    else if(count == 3) outp ='!';
                    else if(count == 4) outp ='?';
                    else if(count == 5) outp =' ';
                }else if(headNum >= '2' && headNum <= '6'){
                    count %= 3;
                    if(count == 0) count = 3;
                    outp = 'a' - 1 + count + (headNum - '2') * 3;
                }else if(headNum == '7'){
                    count %= 4;
                    if(count == 0) count = 4;
                    outp = 'p' - 1 + count;
                }else if(headNum == '8'){
                    count %= 3;
                    if(count == 0) count = 3;
                    outp = 't' - 1 + count;
                }else if(headNum == '9'){
                    count %= 4;
                    if(count == 0) count = 4;
                    outp = 'w' - 1 + count;
                }
                cout.put(outp);

                if(inp[i] - '0'){
                    i--;
                }
                head = true;
                continue;
            }
        }
        cout << endl;
    }
}