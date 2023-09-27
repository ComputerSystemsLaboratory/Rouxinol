//クイックソート
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define vec_input(v) for(auto it=v.begin();it!=v.end();it++){cin>>*it;}
#define vec_output(v) for(auto it=v.begin();it!=v.end();it++){if(it!=v.begin())cout<<" ";cout<<*it;}cout<<endl;
#define vec_debug(v) for(auto it=v.begin();it!=v.end();it++){cerr<<*it<<" ";}cerr<<endl;
#define yn(ans) cout<<(ans?"Yes":"No")<<endl
#define YN(ans) cout<<(ans?"YES":"NO")<<endl
#define umap unordered_map
#define uset unordered_set
using namespace std;
using ll = long long;

void merge(vector<pair<char,int>> &a,int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;
    vector<pair<char,int>> L(n1+1),R(n2+1);
    for(int i=0;i<n1;i++)L[i]=make_pair(a[left+i].first,a[left+i].second);
    for(int i=0;i<n2;i++)R[i]=make_pair(a[mid+i].first,a[mid+i].second);
    int i=0,j=0;
    L[n1].second=2000000000,R[n2].second=2000000000;
    for(int k=left;k<right;k++){
        if(L[i].second<=R[j].second){
            a[k]=make_pair(L[i].first,L[i].second);
            i++;
        }else{
            a[k]=make_pair(R[j].first,R[j].second);
            j++;
        }
    }
}

void mergesort(vector<pair<char,int>> &a,int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid,right);
        merge(a,left,mid,right);
    }
}

int partition(vector<pair<char,int>> &a,int p,int r){
    int x=a[r].second;
    int i=p-1;
    for(int j=p;j<r;j++){
        if(a[j].second<=x){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return (int)(i+1);
}

void quick_sort(vector<pair<char,int>> &a,int p,int r){
    if(p<r){
        int q=partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}

int main(){
    int n,x;
    char c;
    cin>>n;
    vector<pair<char,int>> vec(n),vec2(n);
    rep(i,n){
        cin>>c>>x;
        vec[i]=make_pair(c,x);
        vec2[i]=make_pair(c,x);
    }
    quick_sort(vec,0,n-1);
    mergesort(vec2,0,n);
    int ans=1;
    rep(i,n){
        if(vec[i].first!=vec2[i].first){
            ans=0;
            break;
        }
    }
    cout<<(ans?"Stable":"Not stable")<<endl;
    rep(i,n){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
}
