#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
template <class T> struct BIT_sum_single_add{
    vector<T>arr;
    void init(const vector<T> &a){
        arr.resize(a.size()+1);
        for(int i=1;i<arr.size();i++)arr[i]=a[i-1];
        for(int i=1;i<arr.size();i++)if(i+(i&-i)<arr.size())arr[i+(i&-i)]+=arr[i];
        return ;
    }
    T sum(int pos){
        T temp=0;
        pos++;
        while(pos>0){
            temp+=arr[pos];
            pos-=pos&-pos;
        }
        return temp;
    }
    /*void push(T a){
        arr.push_back(a);
        arr[(int)arr.size()-1]+=(sum((int)arr.size()-3)-sum((int)arr.size()));
        return ;
    }*/
    void add(T a,int pos){
        pos++;
        while(pos<arr.size()){
            arr[pos]+=a;
            pos+=pos&-pos;
        }
        return;
    }
    
};
template <class T> struct BIT_2D_max_single_add{
    
};
template <class T>struct BIT_2D_sum_single_add{
    
};
template <class T>struct BIT_sum_multi_add{
    vector<T>arr;
    void init(const vector<T> a){
        arr.resize(a.size()+1);
        for(int i=1;i<arr.size();i++)arr[i]=a[i-1];
        for(int i=1;i<arr.size();i++)if(i+(i&-i)<arr.size())arr[i+(i&-i)]+=arr[i];
        return ;
    }
    
};
template <class T> struct BIT_max_single_add{
    vector<T>arr;
    void init(const vector<T> &a){
        arr.resize(a.size()+1);
        for(int i=1;i<arr.size();i++)arr[i]=a[i-1];
        for(int i=1;i<arr.size();i++)if(i+(i&-i)<arr.size())arr[i+(i&-i)]=max(arr[i],arr[i+(i&-i)]);
        return ;
    }
    void update(T a,int pos){
        pos++;
        while(pos<arr.size()){
            arr[pos]=max(arr[pos],a);
            pos+=pos&-pos;
        }
        return ;
    }
    /*void add(T a,int pos){
        pos++;
        while(pos<arr.size()){
            arr[pos]+=a;
            pos+=pos&-pos;
        }
        return;
    }*/
    T sum(int pos){
        pos++;
        T temp=arr[pos];
        pos-=pos&-pos;
        while(pos>0){
            temp=max(temp,arr[pos]);
            pos-=pos&-pos;
        }
        return temp;
    }
};
template <class T> struct BIT_min_single_add{
    
};
template <class T> struct segment_tree{
    
};
struct AVL_tree{
    
};
struct merge_split_tree{
    
};
template <class T> struct carstain_tree{
public:
    struct node{
        T val;
        int left;
        int right;
        int parent;
        void init(){
            right=left=parent=-1;
            return ;
        }
    };
    vector<node>map;
    int root;
    int size;
    void init(){
        root=-1;
        size=0;
        map.clear();
        return ;
    }
    void push(T n){
        node temp;
        temp.init();
        temp.val=n;
        map.push_back(temp);
        if(size==0)root=0;
        else insert(size-1,size);
        size++;
        return ;
    }
    void in_print(){
        inorder(root);
        printf("\n");
        return ;
    }
    void pre_print(){
        preorder(root);
        printf("\n");
        return ;
    }
    void post_print(){
        postorder(root);
        printf("\n");
        return ;
    }
private:
    void insert(int now,int n){
        if(map[n].val>map[now].val){
            map[now].right=n;
            map[n].parent=now;
        }
        else if(now==root){
            root=n;
            map[n].left=now;
            map[now].parent=n;
        }
        else{
            insert(map[now].parent,n);
            if(map[map[now].parent].right!=now){
                map[now].parent=n;
                map[n].left=now;
            }
        }
        return ;
    }
    void inorder(int now){
        if(map[now].left!=-1){
            inorder(map[now].left);
            printf(" ");
        }
        cout<<map[now].val;
        if(map[now].right!=-1){
            printf(" ");
            inorder(map[now].right);
        }
        return ;
    }
    void preorder(int now){
        cout<<map[now].val;
        if(map[now].left!=-1){
            printf(" ");
            preorder(map[now].left);
        }
        if(map[now].right!=-1){
            printf(" ");
            preorder(map[now].right);
        }
        return ;
    }
    void postorder(int now){
        if(map[now].left!=-1){
            postorder(map[now].left);
            printf(" ");
        }
        if(map[now].right!=-1){
            postorder(map[now].right);
            printf(" ");
        }
        cout<<map[now].val;
        return ;
    }
};
struct tree{
    
};
struct W_tree{
    
};
struct trie{
    
};
struct list{
    
};
struct double_list{
    
};
struct disjoint_set{
public:
    vector<int> arr;
    void init(int size){
        arr.resize(size);
        for(int i=0;i<size;i++)arr[i]=i;
        return ;
    }
    int find(int n){
        if(arr[n]==n)return n;
        return arr[n]=find(arr[n]);
    }
    void add(int l,int r){
        l=find(l);
        r=find(r);
        if(l>r)arr[l]=r;
        else arr[r]=l;
        return ;
    }
    bool check(int l,int r){
        return find(l)==find(r);
    }
};
int main(){
    int n,m,l,r;
    disjoint_set a;
    scanf("%d%d",&n,&m);
    a.init(n);
    while(m--){
        scanf("%d%d%d",&n,&l,&r);
        if(n==0)a.add(l,r);
        else printf("%d\n",a.check(l,r)?1:0);
    }
}