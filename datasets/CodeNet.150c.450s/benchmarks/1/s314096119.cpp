#include<bits/stdc++.h>
#define int long long
using namespace std;
static const int MAX_N = 1ll<<17;
typedef pair<int,int> PII;
int dat[2*MAX_N-1];

class Segment{
    public :
        int n;
        void inti(int n_){
            n=1;
            while(n<n_)n*=2;
            for(int i=0;i<2*n-1;++i)dat[i]=-INT_MAX;
        }

        void update(int k,int a){
            k+=n-1;
            dat[k]=a;
            while(k>0){
                k=(k-1)/2;
                dat[k]=max(dat[k*2+1],dat[k*2+2]);
            }
        }

        int query(int a,int b,int k,int l,int r){
            if(a<=l&&r<=b)return dat[k];
            if(r<=a||b<=l)return -INT_MAX;
            else {
                int vl=query(a,b,k*2+1,l,(l+r)/2);
                int vr=query(a,b,k*2+2,(l+r)/2,r);
                return max(vl,vr);
            }
        }
};

int N;
vector<PII> A;

signed main(){
    cin>>N;
    Segment seg;
    seg.inti(N);
    for(int i=0;i<N;++i){
        int a;
        cin>>a;
        A.push_back(PII(a,-i));
    }
    sort(A.begin(),A.end());
    for(int i=0;i<N;++i){
        int j=-A[i].second;
        seg.update(j,1);
        seg.update(j,max(dat[j+seg.n-1],seg.query(0,j,0,0,seg.n)+1));
    }
    cout<<dat[0]<<endl;
    return 0;
}