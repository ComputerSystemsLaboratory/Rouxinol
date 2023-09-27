#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = s; i < n; i++)
#define rp(i,n) for (int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define all_acc(x) (x).begin(), (x).end(), 0LL
#define int long long
#define absSort(v) sort(a.begin(), a.end(), [](int i, int j) -> bool { return abs(i) < abs(j); });
using namespace std;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using ll = long long;
double pi=3.14159265359;

//出力するよ
void output(vector<int> s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        //if (i != 0)
        //    cout << " ";
        cout << s[i]<<endl;
    }
    //cout << endl;
}

void output3(vector<int> s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        if (i != 0)
            cout << " ";
        cout << s[i];//<<endl;
    }
    cout << endl;
}
int MOD = pow(10, 9) + 7;


//配列の最大の長さ
int longest=2*pow(10,5);
//分割後のリスト２つ
vector<int> L(longest/2 + 2),R(longest/2 +2);
//最大の値
int MAX=pow(10,10);

int merge(vector<int> A,int n,int left,int mid,int right){
    int i,j,k;
    int cnt=0;
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++) L[i]=A[left+i];
    for(int i=0;i<n2;i++) R[i]=A[mid+i];
    L[n1]=R[n2]=MAX;
    i=j=0;

    for(k=left;k<right;k++){
        if(L[i]<=R[i]){
            A[k]=L[i];
            i++;
        }else{
            A[k]=R[j];
            j++;
            cnt+=n1-i;
        }
    }
    return cnt;
}

//マージソートする
int mergeSort(vector<int> A,int n,int left,int right){
    int mid;
    int v1,v2,v3;
    if(left+1<right){
        mid=(left+right)/2;
        v1=mergeSort(A,n,left,mid);
        v2=mergeSort(A,n,mid,right);
        v3=merge(A,n,left,mid,right);
        return v1+v2+v3;
    }else return 0;
}

ll merge_cnt(vector<int> &a) {
    int n = a.size();
    if (n <= 1) { return 0; }

    ll cnt = 0;
    vector<int> b(a.begin(), a.begin()+n/2);
    vector<int> c(a.begin()+n/2, a.end());

    cnt += merge_cnt(b);
    cnt += merge_cnt(c);

    int ai = 0, bi = 0, ci = 0;
    // merge の処理
    while (ai < n) {
        if ( bi < b.size() && (ci == c.size() || b[bi] <= c[ci]) ) {
            a[ai++] = b[bi++];
        } else {
            cnt += n / 2 - bi;
            a[ai++] = c[ci++];
        }
    }
    return cnt;
}

signed main(){
    int n; cin>>n;
    vector<int> a(n);
    rp(i,n) cin>>a[i];

    //反転数を求めてくれる
    //int ans=mergeSort(a,n,0,n);
    cout<<merge_cnt(a)<<endl;    

}
