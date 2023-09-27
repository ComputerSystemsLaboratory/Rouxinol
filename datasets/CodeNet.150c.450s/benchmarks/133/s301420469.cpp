#include<iostream>
using namespace std;

/*
コンテスト日程: D日 = 365日
s d,i: d日にタイプiのコンテストを行った時の満足度
c i:1日のタイプiのコンテストの満足度の下がりやすさ
*/

int z[] = {
    18398,
35037,
51140,
65837,
79325

};

int D;
int c[26],cc[26] = {0};
int s[365][26];
int t[365];
bool x[26] = {0};

/**/

int main(){
    cin >> D;
    int csum = 0;
    for(int i = 0;i < 26;i++){
        cin >> c[i];
        //cc[i] = c[i];
        csum += c[i];
    }
    for(int i = 0;i < D;i++){
        for(int j = 0;j < 26;j++){
            cin >> s[i][j];
        }
    }
    for(int i = 0;i < D;i++){
        cin >> t[i];
    }
    /**/
    /*満足度 + */
    int pans = 0,nans = 0;
    for(int i = 0;i < D;i++){
        pans += s[i][t[i] - 1];
        for(int j = 0;j < 26;j++){
            
            cc[j]++;
            if(t[i] - 1 == j){
                cc[j] = 0;
            } 
            nans += c[j]*cc[j];
        }
        
        cout << pans - nans << endl;
    }

    
    return 0;
}