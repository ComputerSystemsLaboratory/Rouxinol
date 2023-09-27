#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int cou;

void merge(vector<int> &v, int left, int mid, int right){
//    cou++;
//    cout << left <<":"<<mid<<":"<<right<<endl;
    vector<int> lvc, rvc;
//    lvc.assign(v.begin()+left,v.begin()+mid-1);
//    rvc.assign(v.begin()+mid,v.begin()+right-1);
    for(int i=0;i<mid-left;i++)lvc.push_back(v[left+i]);
    for(int i=0;i<right-mid;i++)rvc.push_back(v[mid+i]);
//    for(int i=0;i<lvc.size();i++)cout << lvc[i]<<(i!=lvc.size()-1?" ":"\n");
    lvc.pb(INT_MAX);
    rvc.pb(INT_MAX);
    int lloc, rloc;
    lloc = rloc = 0;
    for(int k = left; k < right; k++){
        cou++;
        if(lvc[lloc]<=rvc[rloc]){
//            cout << lvc[lloc]<<endl;
            v[k]=lvc[lloc];
            lloc++;
        }else{
            v[k]=rvc[rloc];
            rloc++;
        }
    }
//    for(int i=left;i<right;i++)cout << v[i]<<(i!=right-1?" ":"\n");
}

void merge_sort(vector<int> &v,int left,int right){
//    cou++;
    if(right-left>1){
        int mid = (right + left) / 2;
        merge_sort(v, left, mid);
        merge_sort(v, mid, right);
        merge(v, left, mid, right);
    }
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> s(n);
    REP(i,n)cin >> s[i];
    merge_sort(s,0,n);

    REP(i,n)cout << s[i] << (i!=n-1?" ":"\n");
    cout << cou << endl;
}

