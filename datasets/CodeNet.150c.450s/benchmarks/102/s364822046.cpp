#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;
int w,h;
string matrix[20];

const int dx[]={1,0,-1,0}, dy[]={0,-1,0,1};
bool valid(int x,int y)
{
    return (x>=0)&&(x<w)&&(y>=0)&&(y<h)&&(matrix[y][x]!='#');
}
int main()
{
    while(true)
    {
        queue<pair<int,int> > q;
        pair<int,int> man;
        int amount=1;
        
        cin>>w>>h;
        if(w==0&&h==0)
            break;
        for(int i=0;i<h;i++)
        {
            cin>>matrix[i];
            //cout<<matrix[i]<<endl;
        }
        
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(matrix[i][j]=='@')
                {
                    man.first=j;
                    man.second=i;
                }
            }
        }
        
        q.push(man);
        while(!q.empty())
        {
            pair<int,int> current;
            current=q.front();
            q.pop();
            
            for(int i=0;i<4;i++)
            {

                if(valid(current.first+dx[i],current.second+dy[i]))
                {
                    q.push(make_pair(current.first+dx[i],current.second+dy[i]));
                    matrix[current.second+dy[i]][current.first+dx[i]]='#';
                    amount++;
                    //cout<<current.first+dx[i]<<","<<current.second+dy[i]<<endl;
                }
            }
            
            matrix[current.second][current.first]='#';
        }
        
        cout<<amount<<endl;
    }
}