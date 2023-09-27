#include<iostream>
using namespace std;

void solve(int x,int y,int MAP[20][20],int s,int n);

int main()
{
    int x,y,num,size;
    char c;
    int MAP[20][20];

    while(cin >> size >> num , size && num)
    {
        int cnt = 0;

        for(int i=0; i<num; i++){
            for(int j=0; j<size; j++){
                cin >> c;
                if(c == '.'){
                    MAP[i][j] = 0;
                }
                if(c == '#'){
                    MAP[i][j] = 1;
                }
                if(c == '@'){
                    x = j;
                    y = i;
                    MAP[i][j] = 0;
                }
            }
        }

        solve(x,y,MAP,size,num);
        for(int i=0; i<num; i++){
            for(int j=0; j<size; j++){
                if(MAP[i][j] == 2)cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}

void solve(int x,int y,int MAP[20][20],int s,int n)
{
    MAP[y][x] = 2;

    if(x-1 >= 0){
        if(MAP[y][x-1] == 0){
            solve(x-1,y,MAP,s,n);
        }
    }
    if(x+1 < s){
        if(MAP[y][x+1] == 0){
            solve(x+1,y,MAP,s,n);
        }
    }
    if(y-1 >= 0){
        if(MAP[y-1][x] == 0){
            solve(x,y-1,MAP,s,n);
        }
    }
    if(y+1 < n){
        if(MAP[y+1][x] == 0){
            solve(x,y+1,MAP,s,n);
        }
    }

    return;
}