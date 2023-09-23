#include <iostream>

int map[18][18]={};

int a,b;


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    
    while(true){
        std::cin>>a>>b;
        if(a==0&&b==0)break;
        int n;
        std::cin>>n;
        int x[41],y[41];
        for (int i=0; i<n; ++i)
        {
            std::cin>>x[i]>>y[i];
            map[x[i]][y[i]]=-1;
        }
        map[1][1]=1;
        
        for(int i=1;i<=a;++i)
        {
            for(int j=1;j<=b;++j)
            {
                if(map[i][j]==-1)continue;
                if(map[i-1][j]!=-1)map[i][j]+=map[i-1][j];
                if(map[i][j-1]!=-1)map[i][j]+=map[i][j-1];
                //            std::cout<<i<<" "<<j<<" "<<map[i][j]<<"\n";
            }
        }
        std::cout<<map[a][b]<<"\n";
        for(int i=1;i<=a;++i)
        {
            for(int j=1;j<=b;++j)
            {
                map[i][j]=0;
            }
        }
    }
    return 0;
}