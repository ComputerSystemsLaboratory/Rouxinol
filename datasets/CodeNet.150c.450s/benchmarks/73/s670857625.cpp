#include<bits/stdc++.h>
using namespace std;

template<class T>
struct treap{
    #define treapInf INT_MAX

public:
    struct node{
        T val;
        node *lch,*rch;
        int pri,sz;
        T sum,mini;

        node(T val,int pri):val(val),pri(pri),sz(1),sum(val),mini(val){
            lch=rch=NULL;
        }
    };

    node *root;
    treap():root(NULL){srand(time(NULL));}

private:

    inline int size(node *t){return !t?0:t->sz;}
    inline T sum(node *t){return !t?0:t->sum;}
    inline T mini(node *t){return !t?treapInf:t->mini;}

    node *update(node *t){
        if(!t)return t;
        t->sz=size(t->lch)+size(t->rch)+1;
        t->sum=sum(t->lch)+sum(t->rch)+t->val;
        t->mini=min(min(mini(t->lch),mini(t->rch)),t->val);
        return t;
    }

    node *merge(node *l,node *r){
        if(!l||!r)return l?l:r;

        if(l->pri>r->pri){
            l->rch=merge(l->rch,r);
            return update(l);
        }
        else{
            r->lch=merge(l,r->lch);
            return update(r);
        }
    }

    pair<node *,node *>split(node *t,int k){
        if(!t)return make_pair((node *)NULL,(node *)NULL);

        if(k<=size(t->lch)){
            pair<node *,node *>s=split(t->lch,k);
            t->lch=s.second;
            return make_pair(s.first,update(t));
        }
        else{
            pair<node *,node *>s=split(t->rch,k-size(t->lch)-1);
            t->rch=s.first;
            return make_pair(update(t),s.second);
        }
    }

    node *insert(node *t,int k,T val,int pri){
        pair<node *,node *>s=split(t,k);
        t=merge(s.first,new node(val,pri));
        t=merge(t,s.second);
        return update(t);
    }

    node *erase(node *t,int k){
        pair<node *,node *>s1,s2;
        s2=split(t,k+1);
        s1=split(s2.first,k);
        return update(t=merge(s1.first,s2.second));
    }

    node *find(node *t,int k){
        //if(!t)return t;
        int c=size(t->lch);
        if(k<c)return find(t->lch,k);
        if(k==c)return t;
        return find(t->rch,k-c-1);
    }

    T rangeMinimumQuery(int l,int r,node *t){
        int sz=size(t);
        if(r<=0||sz<=l)return treapInf;
        if(l<=0&&sz<=r)return mini(t);

        sz=size(t->lch);
        T vl=rangeMinimumQuery(l,r,t->lch);
        T vr=rangeMinimumQuery(l-sz-1,r-sz-1,t->rch);
        T res=min(vl,vr);
        if(l<=sz&&sz<r)res=min(res,t->val);
        return res;
    }

    T rangeSumQuery(int l,int r,node *t){
        int sz=size(t);
        if(r<=0||sz<=l)return 0;
        if(l<=0&&sz<=r)return sum(t);

        sz=size(t->lch);
        T vl=rangeSumQuery(l,r,t->lch);
        T vr=rangeSumQuery(l-sz-1,r-sz-1,t->rch);
        T res=vl+vr;
        if(l<=sz&&sz<r)res+=t->val;
        return res;
    }

    void debug(node *t){
        if(!t)return;
        debug(t->lch);
        cout<<t->val<<" ";
        debug(t->rch);
    }

public:

    void insert(int k,T val){root=insert(root,k,val,rand());}
    void erase(int k){root=erase(root,k);}
    node *find(int k){return find(root,k);}

    void add(int k,T v){
        node *a=find(k);
        T tmp=a->val;
        erase(k);
        insert(k,tmp+v);
    }

    void update(int k,T v){
        erase(k);
        insert(k,v);
    }

    T rangeMinimumQuery(int l,int r){
        return rangeMinimumQuery(l,r,root);
  }


    T rangeSumQuery(int l,int r){
        return rangeSumQuery(l,r,root);
    }


    void debug(){
        debug(root);
        cout<<endl;
    }
};


int main(){


    int n,q;
    cin>>n>>q;

    treap<int>t;

    for(int i=0;i<n;i++)t.insert(i,0);

    while(q--){
        int com,x,y;
        cin>>com>>x>>y;
        x--;
        if(com==0){
            t.add(x,y);
        }
        else{
            cout<<t.rangeSumQuery(x,y)<<endl;
        }
    }

    return 0;
}