#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>
 
using namespace std;
 
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back
 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;

int cnt = 0;

void merge(int a[], int count);

int main(int argc, char const *argv[])
{
    int n;
    int i;
    cin >> n;
    int a[n];
    rep(i,n) {
        cin >> a[i];
     //   P(a[i]);
    }
    merge(a, n);
    rep(i, n - 1){
        cout << a[i] << " ";
    }
    cout << a[n -1] << endl;
    P(cnt);
    return 0;
}

void merge(int a[], int count){
    if (count <= 1){
        return ;
    }
    int middle = (count - 1) / 2;   //index
    //cout << "middle: " << middle << " count: " << count << std::endl;;
    int b1[middle + 1];
    int b2[count - (middle + 1)];
    int i = 0;
    int j = 1;
    int k = 0;
    REP(i, 0, middle + 1) {
        b1[i] = a[i];
        //P(a[i]);
    }
    REP(i, 1, count - middle) {
        b2[i - 1] = a[middle + i];
        //P(b2[i - 1]);
    }
    merge(b1, middle + 1);
    merge(b2, count - (middle + 1));
    i = 0;
    while(i <= middle && middle + j <= count - 1) {
        if(b1[i] <= b2[j - 1]){
            //cout << "aaa  " <<  "b1: " << b1[i] << " b2: " << b2[j - 1] << endl;
            a[k] = b1[i];
            i++;
        }else {
            //cout << "aaa  " <<  "b1: " << b1[i] << " b2: " << b2[j - 1] << endl;
            a[k] = b2[j - 1];
            j++;
        }
        k++;
        cnt++;
    }

    if(i > middle){
        while(middle + j <= count - 1) {
            a[k] = b2[j - 1];
            j++;
            k++;
            cnt++;
        }
    }else if(middle + j > count - 1){
        while(i <= middle) {
            a[k] = b1[i];
            i++;
            k++;
            cnt++;
        }
    }
    // rep(i, count){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
}