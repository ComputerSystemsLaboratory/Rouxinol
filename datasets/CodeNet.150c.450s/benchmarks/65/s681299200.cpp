#include<iostream>

using namespace std;

struct card{
    char name[2];
    int value;
    char suit;
};

int judge_stable(card c[],card sorted_c[], int N){
    int beforenum = 10;
    int samenum = 1;
    for(int i=0; i<N; i++){
        if(beforenum==sorted_c[i].value){
            samenum += 1;
        }else samenum = 1;

        int iter = samenum;
        for(int j=0; j<N; j++){
            if(c[j].value==sorted_c[i].value){
                iter -= 1;
                if((c[j].suit!=sorted_c[i].suit) && iter==0){
                    cout << "Not stable" << endl;
                    return 0;
                }else break;
            }
        }
        beforenum = sorted_c[i].value;
    }
    cout << "Stable" << endl;
    return 0;
}

int main(){
    int N;
    cin >> N;
    card c[N], c1[N], c2[N];
    for(int i=0; i<N; i++){
        cin >> c[i].name;
        c[i].value = int(c[i].name[1]);
        c[i].suit = c[i].name[0];
        c1[i] = c[i]; c2[i] = c[i];
    }

    for(int i=0; i<N; i++){
        for(int j=N-1; j>=i+1; j--){
            if(c1[j].value < c1[j-1].value){
                card tmp = c1[j];
                c1[j] = c1[j-1];
                c1[j-1] = tmp;
            }
        }
    
    }

    for(int i=0; i<N; i++){
        int minj = i;
        for(int j=i; j<N; j++){
            if(c2[j].value<c2[minj].value){
                minj = j;
            }
        }
        card tmp = c2[i];
        c2[i] = c2[minj];
        c2[minj] = tmp;
    }

    for(int i=0; i<N-1; i++){
        cout << c1[i].name << " "; 
    }
    cout << c1[N-1].name << endl;
    judge_stable(c, c1, N);

    for(int i=0; i<N-1; i++){
        cout << c2[i].name << " "; 
    }
    cout << c2[N-1].name << endl;
    judge_stable(c, c2, N);
}