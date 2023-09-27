#include <bits/stdc++.h>
using namespace std;
int main(void){
    int h;
    while (cin>>h) {
        if (h==0) {
            break;
        }
        std::vector<vector<int>> vec(h,vector<int>(5));
        int a;
        for (int i=0;i<h;i++) {
            for (int j=0;j<5;j++) {
                cin>>a;
                vec[i][j]=a;
            }
        }
        int flag=0,score=0;
        while (1) {
            flag=0;
            for (int i=0;i<h;i++) {
                if (vec[i][0]!=0&&vec[i][0]==vec[i][1]&&vec[i][0]==vec[i][2]&&vec[i][0]==vec[i][3]&&vec[i][0]==vec[i][4]) {
                    score+=vec[i][0]*5;
                    flag=1;
                    for (int j=0;j<5;j++) {
                        vec[i][j]=0;
                    }
                } else if (vec[i][0]!=0&&vec[i][0]==vec[i][1]&&vec[i][0]==vec[i][2]&&vec[i][0]==vec[i][3]) {
                    score+=vec[i][0]*4;
                    flag=1;
                    for (int j=0;j<4;j++) {
                        vec[i][j]=0;
                    }
                } else if (vec[i][1]!=0&&vec[i][1]==vec[i][2]&&vec[i][1]==vec[i][3]&&vec[i][1]==vec[i][4]) {
                    score+=vec[i][1]*4;
                    flag=1;
                    for (int j=1;j<5;j++) {
                        vec[i][j]=0;
                    }
                } else if (vec[i][0]!=0&&vec[i][0]==vec[i][1]&&vec[i][0]==vec[i][2]) {
                    score+=vec[i][0]*3;
                    flag=1;
                    for (int j=0;j<3;j++) {
                        vec[i][j]=0;
                    }
                } else if (vec[i][1]!=0&&vec[i][1]==vec[i][2]&&vec[i][1]==vec[i][3]) {
                    score+=vec[i][1]*3;
                    flag=1;
                    for (int j=1;j<4;j++) {
                        vec[i][j]=0;
                    }
                } else if (vec[i][2]!=0&&vec[i][2]==vec[i][3]&&vec[i][2]==vec[i][4]) {
                    score+=vec[i][2]*3;
                    flag=1;
                    for (int j=2;j<5;j++) {
                        vec[i][j]=0;
                    }
                }
            }
            if (flag==0) {
                cout<<score<<endl;
                break;
            } else {
                for (int i=h-1;i>=0;i--) {
                    for (int j=0;j<5;j++) {
                        if (vec[i][j]!=0) {
                            int tmp=i;
                            while (tmp+1<h&&vec[tmp+1][j]==0) {
                                swap(vec[tmp][j],vec[tmp+1][j]);
                                tmp++;
                            }
                        }
                    }
                }
                /*
                for (int i=0;i<h;i++) {
                    for (int j=0;j<5;j++) {
                        cout<<vec[i][j]<<" ";
                    }
                    cout<<endl;
                }
                cout<<endl;
                */
            }
        }
    }
}
