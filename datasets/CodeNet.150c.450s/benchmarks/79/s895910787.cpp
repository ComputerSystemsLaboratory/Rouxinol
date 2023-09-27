#include <iostream>
#include <string>
#include<vector>
#include<string.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    int n,r;
    while(cin>>n>>r,n,r){;
        int card[60];
        for(int i=0;i<60;i++){
            card[i]=n-i;
        }
        for(int i=0;i<r;i++){
            int p,c;
            cin>>p>>c;
            vector<int>C;
            for(int j=0;j<c;j++){
                C.push_back(card[p-1+j]);
            }
            int j;
            for(j=c+p-2;j>=c-1;j--){
                card[j]=card[j-c];
            }
            for(int k=0;k<c;k++){
                card[k]=C[k];
            }
        }
        cout<<card[0]<<endl;
    }
    return 0;
}