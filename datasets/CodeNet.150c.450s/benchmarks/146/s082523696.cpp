#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    
    int n = 0;
    cin >> n;

    float Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    vector<pair<float, float> > A;
    vector<pair<float, float> > B;
    vector<pair<float, float> > C;
    vector<pair<float, float> > D;

    for(int i = 0; i < n; i++){
        cin >> Ax >> Ay >>  Bx >>  By >>  Cx >>  Cy >>  Dx >> Dy;
        A.push_back(make_pair(Ax, Ay));
        B.push_back(make_pair(Bx, By));
        C.push_back(make_pair(Cx, Cy));
        D.push_back(make_pair(Dx, Dy));
    }

    for(int i = 0; i < n; i++){
        float a = 0;
        float b = 0;
        //0除算対策
        if(A[i].first == B[i].first ){
            a = 9999999;
        }else{
            a = (A[i].second - B[i].second) / (A[i].first - B[i].first);
        }

        if(C[i].first == D[i].first){
            b = 9999999;
        }else{
             b = (C[i].second - D[i].second) / (C[i].first - D[i].first);
        }

        if(a == b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
} 
