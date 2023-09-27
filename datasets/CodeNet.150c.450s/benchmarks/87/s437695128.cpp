#include <iostream>
#include <vector>
using namespace std;

int step_score=0;

vector< vector<int> > step(vector< vector<int> > T,int H){
    for(int i=0;i<H;i++){
        for(int j=0;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(T.at(i).at(k)!=T.at(i).at(k-1)){
                    if(k-j>=3){
                        for(int l=j;l<k;l++){
                            step_score+=T.at(i).at(l);
                            T.at(i).at(l)=0;
                        }
                    }
                    break;
                }
            }
        }
    }
    vector< vector<int> > T_next(H,vector<int>(6,0));
    for(int j=0;j<6;j++){
        int p=H-1;
        for(int i=H-1;i>=0;i--){
            if(T.at(i).at(j)!=0){
                T_next.at(p).at(j)=T.at(i).at(j);
                p--;
            }
        }
    }
    return T_next;
}

int main(){
    int H;
    cin >> H;
    while(H>0){
        vector< vector<int> > D(H,vector<int>(6,0));
        for(int i=0;i<H;i++) D.at(i).at(5)=10;
        for(int i=0;i<H;i++){
            for(int j=0;j<5;j++){
                cin >> D.at(i).at(j);
            }
        }
        int totalscore=0;
        while(true){
            step_score=0;
            D=step(D,H);
            /*
            for(int i=0;i<H;i++){
                for(int j=0;j<6;j++){
                    cout << D.at(i).at(j) << " ";
                }
                cout << endl;
            }
            cout << endl;
            */
            if(step_score>0){
                totalscore+=step_score;
            }else{
                break;
            }
        }
        cout << totalscore << endl;
        cin >> H;
    }
}
