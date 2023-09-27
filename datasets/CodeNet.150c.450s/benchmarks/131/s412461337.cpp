#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    
    while(1){
        int a, L;
        cin>> a>> L;
        if(!(a||L)) break;
        
        int k=1e6;
        int S[k];
        for(int i=0; i<k; i++) S[i]=-1;
        S[a]=0;
        int cnt=0;
        while(1){
            string A=to_string(a);
            while(A.size()!=L) A+='0';
            sort(A.begin(), A.end());
            int mi=stoi(A);
            reverse(A.begin(), A.end());
            int ma=stoi(A);
            a=ma-mi;
            cnt++;
            if(S[a]!=-1){
                cout<< S[a]<< " ";
                cout<< a<< " ";
                cout<< cnt-S[a]<< endl;
                break;
            }
            S[a]=cnt;
        }
    }

    return 0;
}