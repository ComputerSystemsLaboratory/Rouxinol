#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N,K;
    cin>>N>>K;
    int *A=new int[N];
    for(int i=0;i<N;++i){
        cin>>A[i];
    }
    for(int i=K;i<N;++i){
        cout<<((A[i-K]<A[i])?"Yes":"No")<<endl;
    }
    delete[] A;
    return 0;
}