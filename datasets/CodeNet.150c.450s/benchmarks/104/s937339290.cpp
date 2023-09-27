#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int num,buddy,*line,a,b,c;
    cin >> num >> buddy;
    line = new int[num];
    for(int i = 0 ; i < num ; i++){
        line[i] = i + 1;
    }
    for(int i = 0 ; i < buddy ; i++){
        scanf("%d,%d",&a,&b);
        c = line[a - 1];
        line[a - 1] = line[b - 1];
        line[b - 1] = c;
    }
    for(int i = 0 ; i < num ; i++){
        cout << line[i] << '\n';
    }

    return 0;
}