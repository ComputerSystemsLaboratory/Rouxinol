#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    char ans[100];
    char s[1100];
    int value;
    int h = 0,w,cnt;
    bool judge;
    char tmp[9][6] = {{".,!? "},{"abc"},{"def"},{"ghi"},{"jkl"},{"mno"},{"pqrs"},{"tuv"},
        {"wxyz"}};
    cin >> n;
    while(n--){
        value = 0;
        memset(ans,0,sizeof(ans));
        memset(s,0,sizeof(s));
        cin >> s;
        for(int i=0;i<strlen(s);i++){
            cnt = 0;
            h = 0;
            while(1){
                if(s[i] == '0') break;
                h = s[i]%'0';
                cnt++;  
                i++;
            }
            w = cnt-1;
            judge = false;
            switch (h-1){
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 7:
                    ans[value] = tmp[h-1][w%3];
                    judge = true;
                    break;
                case 6:
                case 8:
                    ans[value] = tmp[h-1][w%4];
                    judge = true;
                    break;
                case 0:
                    ans[value] = tmp[h-1][w%5];
                    judge = true;
            }
            if(judge) value++;
        }
        cout << ans << endl;
    }
}