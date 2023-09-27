#include <iostream>
#include <string>
#include <algorithm>
#define MAX 30
using namespace std;
string S;

int main(){
    while (1) {
        int p;
        cin >> p;
        if (p!=0) {
            int stx[MAX],sty[MAX];
            for (int i = 0; i<p; i++){
                cin >> stx[i] >> sty[i];
            }
            int area[MAX][MAX]={};
            int pointx=10,pointy=10;
            int ord_num,ord_dis;
            char ord_dir;
            cin >> ord_num;
            for (int i =0; i<ord_num; i++) {
                cin >> ord_dir >> ord_dis;
                if (ord_dir=='N') {
                    for (int j=0; j<ord_dis; j++) {
                        pointy++;
                        area[pointx][pointy]=1;
                    }
                }if (ord_dir=='E') {
                    for (int j=0; j<ord_dis; j++) {
                        pointx++;
                        area[pointx][pointy]=1;
                    }
                }if (ord_dir=='S') {
                    for (int j=0; j<ord_dis; j++) {
                        pointy--;
                        area[pointx][pointy]=1;
                    }
                }if (ord_dir=='W') {
                    for (int j=0; j<ord_dis; j++) {
                        pointx--;
                        area[pointx][pointy]=1;
                    }
                }
            }
            int flag=0;
            for (int i=0; i<p; i++) {
                if (area[stx[i]][sty[i]]==1) {
                    flag++;
                }
            }
            if (flag==p) {
                cout << "Yes"<<"\n";
            }else{
                cout << "No" << "\n";
                
            }
        }else{
            break;
        }
    }
    
}