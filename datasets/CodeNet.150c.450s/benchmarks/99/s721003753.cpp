#include <bits/stdc++.h>
#include <map>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;
 
typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;
 
const ll MOD=1e9+7;
const ll INF=1e18;
 
int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};


char num[] = {'0','1','2','3','4','5','6','7','8','9'};
char mcxi[] = {'m','c','x','i'};
int mcxi2[] = {1000,100,10,1};


int sum[2];

int main(){


    int n;
    cin >> n;
    for(int iii = 0;iii < n;iii++){
        char inp[2][12];
        cin >> inp[0] >> inp[1];
        for(int k = 0;k < 2;k++){
            sum[k] = 0;
            for(int i = 0;i < strlen(inp[k]);i++){
                int flag = 0;
                for(int j = 2;j <= 9;j++){
                    if(num[j] == inp[k][i]){
                        flag = j;
                        break;
                    }
                }
                if(flag == 0){
                    flag = 1;
                }else{
                    i++;
                }
                for(int j = 0;j < 4;j++){
                    if(inp[k][i] == mcxi[j]){
                        sum[k] += flag * mcxi2[j];
                        break;
                    }
                }
            }
   //         cout << sum[k] << endl;
        }
        int s = sum[0] + sum[1];
        for(int i = 0;i < 4;i++){
            if(s / mcxi2[i] > 1) cout << s/mcxi2[i];
            if(s / mcxi2[i] >= 1) cout << mcxi[i];
            s %= mcxi2[i];
        }
        cout << endl;
        

    }
}
