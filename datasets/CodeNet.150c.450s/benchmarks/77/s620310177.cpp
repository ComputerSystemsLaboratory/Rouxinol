#include<iostream>
using namespace std;
int main(){
    while(1){
        int z[21][21]={};
        int i,x=10,y=10,a,b,flag=0;
        char h;
        cin >> i;
        if(i==0)    break;
        while(i--){
            cin >> a >> b;
            z[b][a] = 1;
        }
        cin >> i;
        while(i--){
            cin >> h >> a;
            if(h=='N') 
                while(a--){
                    z[++y][x] = 0;
                }
            else if(h=='E')
                while(a--){
                    z[y][++x] = 0;
                }
            else if(h=='S') 
                while(a--){
                    z[--y][x] = 0;
                }
            else if(h=='W')
                while(a--){
                    z[y][--x] = 0;
                }
        }
        for(int Y=0;Y<20;Y++){
            for(int X=0;X<20;X++){
                if(z[Y][X]==1){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)   cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}