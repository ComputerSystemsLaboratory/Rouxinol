#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int e,v,a,b;
    cin >> v >> e;
    pair<int, pair<int,int> > hrany[e];
    int vrcholy[v];
    for(int i=0; i<e; i++){
        cin>> hrany[i].second.first >> hrany[i].second.second >> hrany[i].first;
    }
    vector< vector <int> > komp;
    int vaha=0;
    komp.resize(v);
    for(int i=0; i<v; i++){
        vrcholy[i]=i;
        komp[i].resize(1);
        komp[i][0]=i;
    }
    sort(hrany, hrany+e);
    for(int i=0; i<e; i++){
        a=hrany[i].second.first;
        b=hrany[i].second.second;
        if(vrcholy[a]!=vrcholy[b]){
            vaha+=hrany[i].first;
            int x=vrcholy[a];
            int y=vrcholy[b];
            if(komp[x].size()<komp[y].size()){
                for(int j=0; j<komp[x].size(); j++){
                    vrcholy[komp[x][j]]=y;
                    komp[y].push_back(komp[x][j]);
                }
            }
            else{
                for(int j=0; j<komp[y].size(); j++){
                    vrcholy[ komp [y] [j] ]=x;
                    komp[x].push_back(komp[y][j]);
                }
            }
        }
    }
    cout<< vaha << endl;
    return 0;
}

