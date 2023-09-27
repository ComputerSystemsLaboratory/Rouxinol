#include<stdio.h>
#include<string.h>
#include<cstdlib>
#include<memory>
#include<utility>
#include<iostream>
#include<queue>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
 
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0;i<(int)(n);i++)

template <typename Type=int> class SegmentTree{
    public:
        int strnum;
        int strbeg;
        int nodemax;
        std::unique_ptr<Type[]> node;
        std::unique_ptr<std::pair<int,int>[]> noderange;

        SegmentTree(int a){
            strnum=a;
            strbeg=1;
            while(strbeg<strnum)strbeg*=2;
            strbeg-=1;
            nodemax=strbeg*2+1;
            node.reset(new Type[nodemax]);
            noderange.reset(new std::pair<int,int>[nodemax]);
            noderange[0]=std::make_pair(0,nodemax-strbeg-1);
            for(int i=1;i<nodemax;i++){
                int parent=(i-1)/2;
                int pleft=noderange[parent].first;
                int pright=noderange[parent].second;
                if(parent*2+1==i){
                    noderange[i]=std::make_pair(pleft,(pright+pleft)/2);
                }
                else{
                    noderange[i]=std::make_pair((pleft+pright)/2+1,pright);
                }
            }
        }
        Type operation(Type left,Type right){
            return left+right;
        }
        Type operation(Type left,Type center,Type right){
            return min(min(left,center),right);
        }
        void init(Type in){
            REP(i,nodemax)node[i]=in;
        }
        void update(int i,Type x){
            i+=strbeg;
            node[i]+=x;
            while(i>0){
                i=(i-1)/2;
                node[i]=operation(node[2*i+1],node[2*i+2]);
            }
        }
        Type find(int l,int r,int n=0){
            std::pair<int,int> ran=noderange[n];
            int center=(ran.first+ran.second)/2;
            if(l==ran.first&&r==ran.second)return node[n];
            else if(center<l)return find(l,r,2*n+2);
            else if(center>=r)return find(l,r,2*n+1);
            else return operation(find(l,center,2*n+1),find(center+1,r,2*n+2));
        }
};

int main()
{
    int n,q;
    scanf("%d %d\n",&n,&q);
    SegmentTree<long long int> a(n);
    a.init(0);
    long long int b,x,y;
    REP(i,q){
        scanf("%lld %lld %lld\n",&b,&x,&y);
        if(b==0){
            a.update(x-1,y);
        }
        else{
            printf("%lld\n",a.find(x-1,y-1));
        }
    }
    return 0;
}
