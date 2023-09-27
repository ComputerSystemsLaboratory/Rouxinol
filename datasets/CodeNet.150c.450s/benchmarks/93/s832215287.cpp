#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long i=0;i<(long)(n);i++)
#define all(obj) (obj).begin(),(obj).end()
typedef long long ll;
ll mod=1e10+7;

void merge(vector<pair<char,long> > &a,long p,long mid,long r){
    long n1=mid-p;
    long n2=r-mid;
    vector<pair<char,long> > L(n1);
    vector<pair<char,long> > R(n2);
    for(long i=0;i<n1;i++) L.at(i)=a.at(p+i);
    for(long i=0;i<n2;i++) R.at(i)=a.at(mid+i);
    pair<char, long> data('a',mod);
    L.push_back(data);
    R.push_back(data);
    long i=0;
    long j=0;
    for(long k=p;k<r;k++) {
        if(L.at(i).second<=R.at(j).second){
            a.at(k)=L.at(i);
            i++;
        }
        else{
            a.at(k)=R.at(j);
            j++;
        }
    }
    return;
}

void mergesort(vector<pair<char,long> > &a,long p,long r){
    if(p+1<r){
        long mid=(p+r)/2;
        mergesort(a,p,mid);
        mergesort(a,mid,r);
        merge(a,p,mid,r);
    }
}


long partition(vector<pair<char,long> > &a,long p,long r){
    long i=p-1;
    for(long j=p;j<r;j++){
        if(a.at(j).second<=a.at(r).second) {
            i++;
            swap(a.at(i),a.at(j));
        }
    }
    swap(a.at(r),a.at(i+1));
    return i+1;
}

void quick(vector<pair<char,long> > &a,long f,long r){
    if(f<r){
        long mid=partition(a,f,r);
        quick(a,f,mid-1);
        quick(a,mid+1,r);
    }
}

int main(void){
    long n;
    cin>>n;
    vector<pair<char,long> > a(n);
    vector<pair<char,long> > b(n);
    for(long i=0;i<n;i++) cin>>a.at(i).first>>a.at(i).second;
    b=a;
    quick(a,0,n-1);
    mergesort(b,0,n);
    cout<<(a==b?"Stable":"Not stable")<<endl;

    for(long i=0;i<n;i++)cout<<a.at(i).first<<" "<<a.at(i).second<<endl;
    return 0;
}

