#include<iostream>
#include<queue>
#include<string>
#include<utility>
#include<array>

#define h first
#define w second 

using namespace std;

string map[1002];
int cost[1002][1002] {};


int main()
{
    int H{ 0 };
    int W{ 0 };
    int N{ 0 };

    int nowH{ 0 };
    int nowW{ 0 };

    queue< pair<int, int> > path; //????????? (h, w)

    cin >> H >> W >> N;

    for(int i = 0; i < H; i++)
    {
        //??\???
        cin >> map[i];
        for(int j = 0; j < W; j++)
        {
            //??????????????°????????¢?´¢
            if(map[i][j] == 'S')
            {
                nowH = i;
                nowW = j;
            }
        }
    }

    //???????????§??\???



    //?????????????§£???
    path.push(make_pair(nowH, nowW));

    int nowHP{ 1 };
    while(nowHP <= N)
    {
        pair<int, int> now = path.front();
        path.pop();

        const int dy[4] = {1, -1, 0, 0};
        const int dx[4] = {0, 0, 1, -1};

        for(int i = 0; i < 4; i++)
        {
            int nextH = now.h + dy[i];
            int nextW = now.w + dx[i];

            if(0 <= nextH && nextH < H && 0 <= nextW && nextW < W)
            {
                //?§????????????§???????????\??????????????£??????
                if(map[nextH][nextW] != 'X' && cost[nextH][nextW] == 0)
                {
                    cost[nextH][nextW] = cost[now.h][now.w] + 1;
                    path.push(make_pair(nextH, nextW));
                }
                //????????????????????\??´??????
                if(map[nextH][nextW] == char(nowHP + 48))
                {
                    if(nowHP == N)
                    {
                        cout << cost[nextH][nextW] << endl;
                        return 0;
                    }
                    else
                    {
                        nowHP++;
                        while(!path.empty())path.pop();
                        path.push(make_pair(nextH, nextW));

                        int tmp = cost[nextH][nextW];

                        for(int x = 0; x < W; x++)
                            for(int y = 0; y < H; y++)
                                cost[y][x] = 0;

                        cost[nextH][nextW] = tmp;
                        i = 10;
                    }
                    
                }
//                cout << map[nextH][nextW] << " / h : " << nextH << " w : " << nextW << " :: " << cost[nextH][nextW] << endl;
            }
        }

    }



    return 0;
}