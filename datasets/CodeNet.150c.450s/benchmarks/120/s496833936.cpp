#include <iostream>
#include <bitset>
#include <cstdio>

using namespace std;


#define MaxC 10000
#define MaxR 10
//bitset<MaxC> pan[MaxR];
int pan[MaxR][MaxC];
int R,C;
int result = 0;

void dfs(int index){//sum表示已经得到的最大1的数目，dfs搜索当前行是否反转，得到最大的1的数
    if (index == R){
        int sum = 0;
        for (int i = 0; i < C; ++i) {// 列
            int num = 0;
            for (int j = 0; j < R; ++j) {//行
                if (pan[j][i] == 1)
                    num++;
            }

            sum+=max(num, R - num);
        }
        result = max(result, sum);
    }else{
        dfs(index + 1);
        for (int i = 0; i < C; ++i) {
            if (pan[index][i] == 1)
                pan[index][i] = 0;
            else
                pan[index][i] = 1;
        }
        dfs(index + 1);
    }

}
int main(){
    while(cin>>R>>C && C != 0 && R != 0){
//    cin>>R>>C;
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                cin>>pan[i][j];
            }
        }
        dfs(0);
        cout<<result<<endl;
    }
    return 0;
}
