#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<set>
#include<queue>
#include<math.h>
using namespace std;
#define N (1000000000+7)
#define INF 1e16
typedef long long ll;
char c[10][10];
int main(void){
    c[1][0]='.';
    c[1][1]=',';
    c[1][2]='!';
    c[1][3]='?';
    c[1][4]=' ';
    char alpha='a';
    for(int i=2;i<=9;i++){
        int index=0;
        if(i==7|| i==9){
            while(index<4){
                c[i][index]=alpha;
                index++;
                alpha++;
            }
        }
        else{
            while(index<3){
                c[i][index]=alpha;
                index++;
                alpha++;
            }
        }
    }
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int cnt=0;
        char d='0';
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                if(d!='0'){
                    int x=d-'0';
                    if(x==7||x==9){
                        cout<<c[x][(cnt-1)%4];
                        cnt=0;
                        d='0';
                    }
                    else if(x==1){
                        cout<<c[x][(cnt-1)%5];
                        cnt=0;
                        d='0';
                    }
                    else{
                        cout<<c[x][(cnt-1)%3];
                        cnt=0;
                        d='0';
                    }
                }
            }
            else{
                d=s[i];
                cnt++;
            }
        }
        cout<<endl;
    }
    return 0;
}

