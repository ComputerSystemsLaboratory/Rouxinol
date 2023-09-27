#include<iostream>
using namespace std;
#define INF 1LL<<32
typedef long long ll;
ll A[100][100];
int V,E,s,t;
ll d;
ll D[100][100];

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

void floyd(){
    for(int i=0;i<V;++i){
        for(int j=0;j<V;++j){
            if(A[j][i]==INF) continue;
            for(int k=0;k<V;++k){
                if(A[i][k]==INF) continue;
                A[j][k]=(A[j][k]>A[j][i]+A[i][k]?A[j][i]+A[i][k]:A[j][k]);
            }
        }
    }
}

int main(){
    cin>>V>>E;
    Fill(A,INF);
    for(int i=0;i<V;++i){
        A[i][i]=0;
    }
    for(int i=0;i<E;++i){
        cin>>s>>t>>d;
        A[s][t]=d;
    }

    floyd();

    bool negative=false;
    for(int i=0;i<V;++i){
        if(A[i][i]<0) negative=true;
    }

    if(negative){
        cout<<"NEGATIVE CYCLE\n";
    }
    else{
        for(int i=0;i<V;++i){
            for(int j=0;j<V;++j){
                if(A[i][j]==INF) cout<<"INF";
                else cout<<A[i][j];
                if(j==V-1) cout<<"\n";
                else cout<<" ";
            }
        }
    }
}
