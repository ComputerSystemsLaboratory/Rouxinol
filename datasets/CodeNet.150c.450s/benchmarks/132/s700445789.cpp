#include <bits/stdc++.h>

using namespace std;

int n=0;
int p=0;
int have[55] = {};
int winner=0;
int judge=0;

int main()
{
    while(1){
        scanf("%d %d",&n,&p);
        if(n==0 && p == 0){
            break;
        }
        int pebble = p;
        for(int j=0;j<n;j++){
            have[j]=0;
        }
        while(1){
            for(int j=0;j<n;j++){
                if(pebble != 0){
                    have[j]++;
                    pebble--;
                    if(have[j] == p){
                        winner = j;
                        judge = 1;
                        break;
                    }
                }else{
                    pebble += have[j];
                    have[j] = 0;
                }
            }
            if(judge == 1){
                cout << winner << endl;
                judge = 0;
                break;
            }
        } 
    }

    return 0;
}
