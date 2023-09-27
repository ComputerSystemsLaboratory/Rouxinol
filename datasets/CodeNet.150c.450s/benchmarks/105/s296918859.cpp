#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll=long long;
constexpr ll mod=998244353;
constexpr int inf=1000000000;
constexpr ll linf=1000000000000000000;

template<int COL=60>
struct bitmat{
private:
    vector<bitset<COL>> mat;
    int rank=0;
public:
    int addRow(bitset<COL> &aRow){
        mat.push_back(aRow);
        return eliminate();
    }
    int eliminate(){
        rank=0;
        for(int col=0;col<COL;++col){
            int pivot=-1;
            for(int row=rank;row<(int)mat.size();++row){
                if(mat[row][col]){
                    pivot=row;
                    break;
                }
            }
            if(pivot==-1)continue;
            swap(mat[pivot],mat[rank]);
            for(int row=rank+1;row<(int)mat.size();++row){
                if(mat[row][col]){
                    mat[row]^=mat[rank];
                }
            }
            ++rank;
        }
        return rank;
    }
    int getRank(){
        return rank;
    }
    void removeRow(){
        mat.pop_back();
    }
};


int main(){
    int t;
    cin>>t;
    rep(loop,t){
        int n;
        cin>>n;
        vector<bitset<60>> a;
        a.reserve(n);
        rep(i,n){
            ll val;
            cin>>val;
            a[i]=bitset<60>(val);
        }
        string s;
        cin>>s;
        bitmat<60> mat;
        int win=0;
        for(int i=n-1;i>=0;--i){
            int oldrank=mat.getRank();
            int newrank=mat.addRow(a[i]);
            if(oldrank==newrank){
                mat.removeRow();
            }
            else if(s[i]=='1'){
                win=1;
                break;
            }
        }
        cout<<win<<endl;
    }
}