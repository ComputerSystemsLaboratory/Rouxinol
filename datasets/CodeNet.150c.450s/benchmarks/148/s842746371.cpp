#include <iostream>
 
using namespace std;
 
int main(){
    int N,ac=0,wa=0,tle=0,re=0;
    char S[3];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>S;
        if(S[0]=='A')ac++;
        else if(S[0]=='W')wa++;
        else if(S[0]=='T')tle++;
        else if(S[0]=='R')re++;
    }
    printf("AC x %d\n",ac);
    printf("WA x %d\n",wa);
    printf("TLE x %d\n",tle);
    printf("RE x %d\n",re);
}