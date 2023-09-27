#include<bits/stdc++.h>

#define REP(i,n) for(int (i)=0;(i)<(n);++(i))
#define FOR(i,a,b) for(int (i)=(a);i<(b);++(i))
#define ALL(obj) (obj).begin(),(obj).end()
#define space <<" "<<
#define maxs(x,y) (x=max(x,y))
#define mins(x,y) (x=min(x,y))
#define FIX <<fixed<<setprecision(10)<<
using namespace std;

using ll = long long; using ull = unsigned long long;
using vb = vector<bool>; using vvb = vector<vb>;
using vi = vector<int>; using vvi = vector<vi>;
using vl = vector<ll>; using vvl = vector<vl>;
using pii = pair<int,int>; using pll = pair<ll,ll>;

const ll MOD = 1e9+7;

class Stack{
private:
int m[1000];
int tp;
public:
    Stack(){
    tp=0;
    }
    void push(int x){
        tp++;
        m[tp]=x;
    }
    int pop(){
        tp--;
        return m[tp+1];
    }
}; 
class Queue{
private:
pair<string,int> m[60000];
int head,tail;
public:
    Queue(){
        head=0;
        tail=0;
    }
    bool isEmpty(){
        return head==tail;
    }
    void enqueue(pair<string,int> x){
        m[tail]=x;
        if(tail +1 ==60000)tail=0;
        else tail++;
    }
    pair<string,int> deque(){
        pair<string,int> x=m[head];
        if(head+1==60000)head=0;
        else head++;
        return x;
    } 
};

int main(){
ll n;
while(1){
ll min=0;
cin>>n;
if(n==0)break;
ll A[n];
REP(i,n)cin>>A[i];
min=abs(A[1]-A[0]);
REP(i,n-1)FOR(j,i+1,n)min= min<abs(A[j]-A[i])? min:abs(A[j]-A[i]);
cout<<min<<endl;
}
}
