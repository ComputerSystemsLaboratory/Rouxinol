#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main(){
    char a[1100] = {0};
    scanf("%[^\n]",a);
    int cnt = 0;
    int mx = 0;
    int len[1100] = {0};
    string ans[1100];
    for(int i = 0,j = 0; i <= strlen(a); i++){
        if('a' <= a[i] && a[i] <= 'z' || 'A' <= a[i] && a[i] <= 'Z'){
            ans[cnt] += a[i];
            j++;
        }
        else{
            len[cnt] = j;
            cnt++;
            mx = max(mx,j);
            j = 0;
        }
    }
    string date;
    for(int i = 0; i < cnt; i++){
        if(len[i] == mx){
            date = ans[i];
            break;
        }
    }
    sort(ans,ans+cnt);
    fill(len,len+50,0);
    string mx_date = ans[0];
    ans[cnt] = ' ';
    mx = 0;
    for(int i = 1; i <= cnt; i++){
        if(mx_date == ans[i]){
            mx++;
        }
        else{
            mx_date = ans[i];
            len[i-1] = mx;
            mx = 0;
        }
    }
    for(int i = 0; i < cnt; i++){
        mx = max(mx,len[i]);
    }
    for(int i = 0; i < cnt; i++){
        if(len[i] == mx){
            cout << ans[i] << ' ' << date << endl;
            break;
        }
    }

    return 0;
}