#include<iostream>
#include<vector>
using namespace std;


int main()
{
    while (true)
    {
        int ans=0;
        int H;cin >> H;if (H==0) break;
        vector<vector<int> > board(H,vector<int> (5,0));
        for (int i=0;i<H;i++)
        {
            for (int j=0;j<5;j++)
            {
                cin >> board[i][j];
            }
        }
        bool can=true;
        while (can)
        {
            can=false;
            for (int i=0;i<H;i++)
            {
                vector<int> check;
                for (int j=0;j<4;j++)
                {
                    if (board[i][j]==board[i][j+1] && board[i][j]!=0)
                    {
                        check.push_back(j);
                    }
                }
                int cnt=0;
                for (int j=0;j<(int)check.size()-1;j++)
                {
                    if (check[j+1]-check[j]==1)
                    {
                        cnt++;
                    }
                }
                if (cnt>=1)
                {
                    cnt++;
                    can=true;
                    for (int j=0;j<check.size()-1;j++)
                    {
                        if (check[j+1]-check[j]==1)
                        {
                            ans+=board[i][check[j]]*(cnt+1);
                            for (int k=0;k<=cnt;k++)
                            {
                                board[i][check[j]+k]=0;
                            }
                            break;
                        }
                    }
                }
            }
            for (int j=0;j<5;j++)
            {
                for (int i=H-1;i>=0;i--)
                {
                    if (board[i][j]==0)
                    {
                        int k=i;
                        while (k>=0 && board[k][j]==0)
                        {
                            k--;
                            if (k==-1) break;
                        }
                        if (k!=-1)
                        {
                            board[i][j]=board[k][j];
                            board[k][j]=0;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
