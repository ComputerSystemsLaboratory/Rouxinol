#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define codefor int test;scanf("%d",&test);while(test--)
#define yn(ans) if(ans)printf("Yes\n");else printf("No\n")
#define YN(ans) if(ans)printf("YES\n");else printf("NO\n")
#define vector2d(type,name,h,...) vector<vector<type>>name(h,vector<type>(__VA_ARGS__))
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
void print(const int& a){printf("%d",a);}
void print(const long long& a){printf("%lld",a);}
void print(const double& a){printf("%.15lf",a);}
template<class T> void print(const T& a){cout<<a;}
template<class T> void print(const vector<T>& vec){if(vec.empty())return;print(vec[0]);for(auto it=vec.begin();++it!= vec.end();){putchar(' ');print(*it);}}
void out(){putchar('\n');}
template<class T> void out(const T& t){print(t);putchar('\n');}
template <class Head, class... Tail> void out(const Head& head,const Tail&... tail){print(head);putchar(' ');out(tail...);}
//デバッグ系
template<class T> void dprint(const T& a){cerr<<a;}
template<class T> void dprint(const vector<T>& vec){if(vec.empty())return;cerr<<vec[0];for(auto it=vec.begin();++it!= vec.end();){cerr<<" "<<*it;}}
void debug(){cerr<<endl;}
template<class T> void debug(const T& t){dprint(t);cerr<<endl;}
template <class Head, class... Tail> void debug(const Head& head, const Tail&... tail){dprint(head);cerr<<" ";debug(tail...);}

int left(int i){
    return 2*i+1;
}

int right(int i){
    return 2*i+2;
}

void maxHeapify(vector<int> &vec,int i){
    int size=vec.size();
    int l= left(i);
    int r= right(i);
    int largest;
    //左の子，自分，右の子で最大のノードを選ぶ
    if(l<size&&vec[l]>vec[i])largest=l;
    else largest=i;
    if(r<size&&vec[r]>vec[largest])largest=r;
    //largestとiが異なる場合交換
    if(largest!=i){
        swap(vec[i],vec[largest]);
        maxHeapify(vec,largest);
    }
}

void buildMaxHeap(vector<int> &vec){
    //vec.size()/2は子を持つ最大の節点
    for(int i=vec.size()/2-1;i>=0;i--){
        maxHeapify(vec,i);
    }
}

int main(){
    int h;
    in(h);
    vector<int> vec(h);
    in(vec);
    printf(" ");
    buildMaxHeap(vec);
    out(vec);
}
