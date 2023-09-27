#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> route;
#define P 50
#define Q 50
char a[P+2][Q+2];


void search(int place1,int place2){
    a[place1][place2] = '0';
    if(a[place1][place2-1] == '1'){//左
        route.push_back(1);
        search(place1,place2-1);
    }
    else if(a[place1+1][place2] == '1'){//下
        route.push_back(2);
        search(place1+1,place2);
    }
    else if(a[place1][place2+1] == '1'){//右
        route.push_back(3);
        search(place1,place2+1);
    }
    else if(a[place1-1][place2] == '1'){//上
        route.push_back(4);
        search(place1-1,place2);
    }
    else if(a[place1+1][place2-1] == '1'){//左下
        route.push_back(5);
        search(place1+1,place2-1);
    }
    else if(a[place1+1][place2+1] == '1'){//右下
        route.push_back(6);
        search(place1+1,place2+1);
    }
    else if(a[place1-1][place2+1] == '1'){//右上
        route.push_back(7);
        search(place1-1,place2+1);
    }
    else if(a[place1-1][place2-1] == '1'){//左上
        route.push_back(8);
        search(place1-1,place2-1);
    }
    else{
        int bk = route.back();
        route.pop_back();//戻る
        if(bk == 0) return;
        else if(bk == 1)search(place1,place2+1);
        else if(bk == 2)search(place1-1,place2);
        else if(bk == 3)search(place1,place2-1);
        else if(bk == 4)search(place1+1,place2);
        else if(bk == 5)search(place1-1,place2+1);
        else if(bk == 6)search(place1-1,place2-1);
        else if(bk == 7)search(place1+1,place2-1);
        else if(bk == 8)search(place1+1,place2+1);
    }
}

int main(void){
    int ct;
    int x,y;
    while(1){
        ct = 0;
        cin >> y >> x;
        if(x == 0 & y == 0) break;
        for(int i = 0;i < x+2;i++){
            for(int j = 0;j < y+2;j++){
                if(i == 0||j == 0||i == x+1||j == y+1)a[i][j] = '0';
                else cin >> a[i][j];
                
            }
            
        }
        for(int i = 1;i < x+1;i++){
            for(int j = 1;j < y+1;j++){
                if(a[i][j] == '1'){
                    route.push_back(0);
                    search(i,j);
                    ct++;
                }
            }
        }
        cout << ct << endl;
    }
    return 0;
}
