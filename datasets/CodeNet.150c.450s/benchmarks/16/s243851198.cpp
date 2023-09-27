#include<stdio.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int acc=0;
    vector<int> resultSet;
    stack<int> downIdxSt;
    stack<pair<int,int> > downIdxToAreaSt;
    string line;
    cin>>line;
    for(int i=0; line[i]!='\0'; i++)
    {
        if(line[i]=='_')
            continue;
        else if(line[i]=='\\')
        {
            downIdxSt.push(i);
        }
        else if(!downIdxSt.empty() && line[i]=='/')
        {
            int downIdx=downIdxSt.top(), upIdx=i;
            downIdxSt.pop();
            int area=0;
            area+=(upIdx-downIdx);//当前这层的面积
            acc+=area;//累计这层面积
            //实际area加上这层中间的下层面积
            while(!downIdxToAreaSt.empty() && downIdxToAreaSt.top().first>downIdx)
            {
                area+=(downIdxToAreaSt.top().second);
                downIdxToAreaSt.pop();
            }
            downIdxToAreaSt.push(make_pair(downIdx, area));
        }
    }
    while(!downIdxToAreaSt.empty())
    {
        resultSet.push_back(downIdxToAreaSt.top().second);
        downIdxToAreaSt.pop();
    }
    reverse(resultSet.begin(), resultSet.end());
    printf("%d\n", acc);
    printf("%d", resultSet.size());
    for(int i=0; i<resultSet.size(); i++)
        printf(" %d", resultSet[i]);
    printf("\n");
    return 0;
}
