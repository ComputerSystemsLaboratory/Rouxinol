#include <cstdio>
#include <climits>
#include <vector>

int w[100][100];
std::vector<int> mst;
std::vector<int> others;
typedef std::vector<int>::iterator itr;

int minimum(){
    if(others.size()<=0)return 0;
    int candiW=INT_MAX;
    itr candiI;
    for(itr i=mst.begin();i!=mst.end();i++){
        for(itr j=others.begin();j!=others.end();j++){
            if(w[*i][*j]<candiW){
                candiW = w[*i][*j];
                candiI = j;
            }
        }
    }
    mst.push_back(*candiI);
    others.erase(candiI);
    return candiW + minimum();
}

int main(){
    int i, j, n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&w[i][j]);
            if(w[i][j]==-1)w[i][j]=INT_MAX;
        }
    }
    mst.push_back(0);
    for(i=1;i<n;i++)others.push_back(i);
    printf("%d\n",minimum());
    return 0;
}

