/*
　　　∫ ∫ ∫
　　　ノヽ
　　（＿　 ）
　（＿　　　 ）
（＿＿＿＿＿＿ ）
　ヽ(´･ω･)ﾉ　
　　 |　 /
　　 UU
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
using P = pair<ll, ll>;
const int MOD = (int)1e9 + 7;
const ll INF = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i,s,n) for (int i = s; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end() //コンテナじゃないと使えない!!
#define debug(x) cerr << #x << ": " << x << "\n";
#define mp make_pair
template <typename T>
ostream& operator<<(ostream& os, vector<T> &V){
    int N = V.size();
    REP(i,N){
        os << V[i];
        if (i!=N-1) os << " ";
    }
    os << "\n";
    return os;
}
template <typename T>
ostream& operator<<(ostream& os, pair<T,T> const&P){
    os << P.first;
    os << " ";
    os << P.second;
    return os;
}
template <typename T>
ostream& operator<<(ostream& os, set<T> &S){
    auto it=S.begin();
    while(it!=S.end()){
        os << *it;
        os << " ";
        it++;
    }
    os << "\n";
    return os;
}
template <typename T>
ostream& operator<<(ostream& os, deque<T> &q){
    for(auto it=q.begin();it<q.end();it++){
        os<<*it;
        os<<" ";
    }
     os<<endl;
    return os;
}
//fixed<<setprecision(10)<<ans<<endl;#include <bits/stdc++.h>
class BinaryIndexedTree{
public:
    size_t size;
    std::vector<ll> node;
    BinaryIndexedTree(size_t s){ 
        this->node.assign(s+1, 0); //1-index
        this->size = s;
    }

    void add(int index, int value){
        while(index <= this->size ){
            this->node[index] += value;
            index += index & -index;
        }
    }

    int sum(int index){
        int res = 0; //零元・単位元
        while(index > 0){
            res += this->node[index];
            index -= index & -index;
        }
        return res;
    }

    ll get(int index){
        return this->node[index];
    }
};
template <typename T>
ll Inversion_number(vector<T>& A){
    size_t N = A.size();
    
    vector<int> B = A;
    sort(ALL(B)); 
    B.erase(unique(ALL(B)), B.end());

    BinaryIndexedTree BIT(N);
    ll ans=0; /////　オーバーフローには気をつけましょう！！！！！！！！！！！！！

    REP(i,N){
        int idx = lower_bound(ALL(B),A[i]) - B.begin();
        ans += i - BIT.sum(idx+1);
        BIT.add(idx+1,1);
    }
    return ans;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++)  cin >> A[i];
    ll ans = Inversion_number(A);

    cout << ans << endl;
}

/*マージソートを使って転倒数を求めるver

ll ans2 = 0;
void merge(vector<int>& A, int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right-mid;
    vector<int> L,R;
    L.assign(A.begin()+left, A.begin()+mid);
    R.assign(A.begin()+mid, A.begin()+right);
    int inf = 1 << 30;
    L.push_back(inf);
    R.push_back(inf);
    int i=0,j=0;
    for(int k=left; k<right; k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
            //cout << mid << " " << left << " " << i << endl;
            ans2 += max(mid-left-i,0);
        }
    }
}
void mergeSort(vector<int>& A, int left, int right){
    if (left+1 < right){
        int mid = (left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++)  cin >> A[i];
    mergeSort(A,0,N);
    //ll ans = Inversion_number(A);

    cout << ans2 << endl;
}
*/
