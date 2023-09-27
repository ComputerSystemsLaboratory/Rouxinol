#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define codefor int test;scanf("%d",&test);while(test--)
#define yn(ans) cout<<(ans?"Yes":"No")<<endl
#define YN(ans) cout<<(ans?"YES":"NO")<<endl
#define umap unordered_map
#define uset unordered_set
using namespace std;
using ll = long long;
//入力系
void scan(int& a){scanf("%d",&a);}
void scan(long long& a){scanf("%lld",&a);}
template<class T> void scan(T& a){cin>>a;}
template<class T> void scan(vector<T>& vec){for(auto&& it:vec)scan(it);}
void in(){}
template <class Head, class... Tail> void in(Head& head, Tail&... tail){scan(head);in(tail...);}
//出力系
void print(int& a){printf("%d",a);}
void print(long long& a){printf("%lld",a);}
void print(double& a){printf("%.15lf",a);}
template<class T> void print(T& a){cout<<a;}
template<class T> void print(vector<T>& vec){if(vec.empty())return;print(vec[0]);for(auto it=vec.begin();++it!= vec.end();){putchar(' ');print(*it);}}
void out(){putchar('\n');}
template<class T> void out(T& t){print(t);putchar('\n');}
template <class Head, class... Tail> void out(Head& head, Tail&... tail){print(head);putchar(' ');out(tail...);}
//デバッグ系
template<class T> void dprint(T& a){cerr<<a;}
template<class T> void dprint(vector<T>& vec){if(vec.empty())return;cerr<<vec[0];for(auto it=vec.begin();++it!= vec.end();){cerr<<" "<<*it;}}
void debug(){cerr<<endl;}
template<class T> void debug(T& t){dprint(t);cerr<<endl;}
template <class Head, class... Tail> void debug(Head& head, Tail&... tail){dprint(head);cerr<<" ";debug(tail...);}

int main(){
    int n;
    in(n);
    vector<int> vec(10001,0);
    int x;
    rep(i,n){
        in(x);
        vec[x]++;
    }
    int d=1;
    rep(i,10001){
        if(vec[i]>=1){
            for(int j=0;j<vec[i];j++){
                if(d){
                    printf("%d",i);
                    d=0;
                }else{printf(" %d",i);}
            }
        }
    }
    printf("\n");
}
