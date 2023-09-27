#include <bits/stdc++.h>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

//#define int long long

const ll MOD=1e9+7;
const ll INF=1e18;
const double pi=acos(-1);
const double eps=1e-10;

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};

class SquareDivision{
    private:
        const int BUCKET_SIZE=256;
        int N, B;
        vector<int> data, bucket_sum;

    public:
        void prepare(int n){
            B=(n+BUCKET_SIZE-1)/BUCKET_SIZE;
            N=B*BUCKET_SIZE;
            data.assign(N, 0);
            bucket_sum.assign(B, 0);
        }

        void add(int x, int y){
            int k=x/BUCKET_SIZE;
            data[x]+=y;
            int sum=0;
            for(int i=k*BUCKET_SIZE; i<(k+1)*BUCKET_SIZE; i++){
                sum+=data[i];
            }
            bucket_sum[k]=sum;
        }

        // [x, y)
        int getsum(int x, int y){
            int sum=0;
            for(int i=0; i<B; i++){
                int l=i*BUCKET_SIZE, r=(i+1)*BUCKET_SIZE;
                
                if(r<=x || y<=l) continue;

                if(x<=l && r<=y) sum+=bucket_sum[i];
                else{
                    for(int j=max(x, l); j<min(y, r); j++){
                        sum+=data[j];
                    }
                }
            }
            return sum;
        }
};

signed main(){
    int n, q; cin>>n>>q;
    SquareDivision ans;
    ans.prepare(n);

    while(q--){
        int c, x, y; cin>>c>>x>>y;
        if(c==0){
            ans.add(x, y);
        }
        else{
            cout << ans.getsum(x, y+1) << endl;
        }
    }
}
