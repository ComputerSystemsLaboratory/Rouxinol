#include <iostream>
using namespace std;
int N,k;
int weight[100000];
int ch(long long int p){
        int locate=0;
        for(int i=0 ; i<k ; i++ ){
                long long int s=0;
                while(s+weight[locate]<=p){
                        s+=weight[locate];
                        locate++;
                        if(locate>=N)return N;
                }
        }
        return locate;
}
int main(){
        cin >> N >> k;
        for(int i=0 ; i<N ; i++ )
                cin >> weight[i];
        long long int left=0,right=100000*10000;
        while(right-left>1){
                long long int mid=(left+right)/2;
                int v=ch(mid);
                if(v>=N)right=mid;
                else    left=mid;
        }
        cout<<right<<endl;
}
