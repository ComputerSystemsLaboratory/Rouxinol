#include<cstdio>

int main()
{
    int x;
    while(~scanf("%d",&x))
    {
        printf("%d\n",x*x*x);
    }
    return 0;
}


/*
#include<cstdio>
#include<cmath>
#define mid ((left+right)>>1)
#define lson rt<<1,left,mid
#define rson rt<<1|1,mid+1,right
#define INF 2147483647

int min(int x,int y)
{
    return x>y?y:x;
}

int n,q;
int node[8<<1-1];

void init(int n_)
{
    for(int i=0;i<=n_*2;i++) node[i]=INF;
}

void print_tree(int n_)
{
    for(int i=1;i<=log(n_);i++)
    {
        int temp=1;
        int temp_=1;
        for(int j=0;j<i;j++) temp*=2;
        for(int j=0;j<log(n_);j++) temp_*=2;
        for(int j=0;j<temp_;j++) printf(" ");
        for(int j=1;j<=temp;j++)
        {
            printf("%d ",node);
        }
        printf("\n");
    }
}

int query(int rt,int left,int right,int L,int R)
{


}

void update(int rt,int left,int right,int target,int value)
{
    node[target+n-1]=value;
    int temp = target+n-1;
    while(1){
        temp=(temp-1)/2;
        if(temp<0) break;
        node[temp]=min(node[2*temp+1],node[2*temp+2]);
    }
}

int main()
{
    while(~scanf("%d%d",&n,&q))
    {
        init(n);
        for(int i=0;i<q;i++)
        {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);

            printf("dsa");
            if(a==1) printf("%d\n",query(1,1,n,b,c));
            else update(1,1,n,b,c);
            //print_tree(n);
        }
    }
    return 0;
}


3 5
0 0 1
0 1 2
0 2 3
1 0 2
1 1 2

*/