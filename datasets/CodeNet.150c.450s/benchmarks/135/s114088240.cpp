#include <iostream>
using namespace std;

const int MAX_N=1500, MAX_M=1500, MAX_W=1000;
int roadV[MAX_N], roadH[MAX_M];
int widthV[MAX_N*MAX_W+1];
int widthH[MAX_M*MAX_W+1];

inline int min(int a, int b){
    if(a<b)return a;
    return b;
}


int main() {
    ios_base::sync_with_stdio(0);
    int n, m, i, j, sumV, sumH, cnt, minWidth;
    
    while(1){
        cin >> n >> m;
        if(n==0 && m==0)
            break;
        
        sumV=0;
        sumH=0;
        for(i=0; i<n; i++){
            cin >> roadV[i];
            sumV+=roadV[i];
        }
        for(i=0; i<m; i++){
            cin >> roadH[i];
            sumH+=roadH[i];
        }
        minWidth=min(sumV,sumH);
        
        for(i=1; i<=minWidth; i++){
            widthV[i]=0;
        }
        for(i=1; i<=minWidth; i++){
            widthH[i]=0;
        }
    
        for(i=0; i<n; i++){
            sumV=0;
            for(j=i;j<n;j++){
                sumV+=roadV[j];
                widthV[sumV]++;
            }
        }
        
        for(i=0; i<m; i++){
            sumH=0;
            for(j=i;j<m;j++){
                sumH+=roadH[j];
                widthH[sumH]++;
            }
        }
    
        cnt=0;
        for(i=1; i<=minWidth; i++){
            cnt+=widthV[i]*widthH[i];
        }
    
        cout << cnt << endl;
    }
    return 0;
}