#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n;
int m;

int s1[105]={};
int s2[105]={};


int main(){
    while(1){
        int sum1=0;
        int sum2=0;
        scanf("%d %d",&n,&m);
        if(n == 0 && m == 0) break;
        for(int i=0;i<n;i++){
            scanf("%d",&s1[i]);
            sum1 += s1[i];
        }
        for(int i=0;i<m;i++){
            scanf("%d",&s2[i]);
            sum2 += s2[i];
        }
        int d = sum2-sum1;
        if(abs(d%2) == 1){
            cout << "-1" << endl;
        }else{
            sort(s1,s1+n);
            sort(s2,s2+m);

            int judge = 0;
            int a,b;

            for(int i=0;i<n;i++){
                a = s1[i];
                b = a + d/2;
                if(b < 0 || 100 < b) continue;
                for(int j=0;j<m;j++){
                    if(b == s2[j]){
                        judge = 1;
                        break;
                    }
                    if(b < s2[j]) break;
                }
                if(judge) break;
            }
            if(judge) cout << a << " " << b << endl;
            else cout << "-1" << endl;
        }
        
    }
}
