#include <iostream>

using namespace std;

int DFS(int num, int total, int minNum)
{
    if (num == 0 && total == 0)
    {
        return 1;
    }
    
    if (num == 0) //judge the invalid input
    {
        return 0;
    }
    
    if (total < 0)
    {
        return 0;
    }
    
    if (minNum > 9 || minNum > total)
    {
        return 0;
    }
    
    int count1 = DFS (num - 1, total - minNum, minNum + 1);
    int count2 = DFS (num, total, minNum + 1);
    
    return count1 + count2;
    
}


void Solution()
{
    int n, sum;
    
   // int usedNum = 0;
    
    while (cin>>n>>sum)
    {
        if (n == 0 && sum == 0 )
        {
            break;
        }
        
        int count = DFS (n, sum, 0);
   
        cout<<count<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}

//dfs //depth first search
//cnt // count