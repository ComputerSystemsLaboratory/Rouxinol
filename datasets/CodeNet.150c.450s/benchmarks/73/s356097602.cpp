#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<ctime>
using namespace std;
#define int long long
struct RBST{
    struct node{
        node *lch,*rch;
        int val,sum,lazy,cnt;
        node(int val):val(val),sum(val),lazy(0),cnt(1){
            lch=rch=NULL;
        }
    };

    RBST():root(NULL){srand((unsigned)time(NULL));}
    node *root;

    int count(node *t){return !t?0:t->cnt;}
    int sum(node *t){return !t?0:t->sum;}

    node *update(node *t){
        if(!t)return t;
        if(t->lazy){
            t->val+=t->lazy;
            if(t->lch){
                t->lch->lazy+=t->lazy;
                t->sum+=count(t->lch)*t->lazy;
            }
            if(t->rch){
                t->rch->lazy+=t->lazy;
                t->sum+=count(t->rch)*t->lazy;
            }
            t->lazy=0;
        }
        t->cnt=count(t->lch)+count(t->rch)+1;
        t->sum=sum(t->lch)+sum(t->rch)+t->val;
        return t;
    }

    node *merge(node *a,node *b){
        if(!a)return b;
        if(!b)return a;

        if(rand()%(count(a)+count(b))<count(a)){
            a=update(a);
            a->rch=merge(a->rch,b);
            return update(a);
        }
        else{
            b=update(b);
            b->lch=merge(a,b->lch);
            return update(b);
        }
    }

    pair<node *,node *>split(node *t,int k){
        if(!t)return make_pair(t,t);
        t=update(t);
        if(k<=count(t->lch)){
            pair<node *,node *>s=split(t->lch,k);
            t->lch=s.second;
            return make_pair(s.first,update(t));
        }
        else{
            pair<node *,node *>s=split(t->rch,k-count(t->lch)-1);
            t->rch=s.first;
            return make_pair(update(t),s.second);
        }
    }

    void insert(int k,int val){
        pair<node *,node *>s=split(root,k);
        node *a=new node(val);
        root=merge(s.first,a);
        root=merge(root,s.second);
    }

    void erase(int k){
        pair<node *,node *>s1,s2;
        s1=split(root,k);
        s2=split(s1.second,1);
        root=merge(s1.first,s2.second);
    }

    int getSum(int l,int r){
        pair<node *,node *>s1,s2;
        int ret;

        s1=split(root,l);
        s2=split(s1.second,r-l);
        ret=s2.first->sum;
        root=merge(s1.first,s2.first);
        root=merge(root,s2.second);
        return ret;
    }

    void add(int l,int r,int x){
        pair<node *,node *>s1,s2;
        s1=split(root,l);
        s2=split(s1.second,r-l);
        s2.first->lazy+=x;update(s2.first);
        root=merge(s1.first,s2.first);
        root=merge(root,s2.second);
    }



};

int N,Q;
RBST T;
signed main(){
    scanf("%lld%lld",&N,&Q);
    for(int i=0;i<N;i++){
        T.insert(i,0);
    }
    while(Q--){
        int type;
        scanf("%lld",&type);
        if(type==0){
            int k,x;
            scanf("%lld%lld",&k,&x);
            k--;
            T.add(k,k+1,x);
        }
        else{
            int l,r;
            scanf("%lld%lld",&l,&r);
            l--;
            printf("%lld\n",T.getSum(l,r));
        }
    }
    return 0;
}