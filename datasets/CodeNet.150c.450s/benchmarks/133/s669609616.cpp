#include<iostream>
#include<vector>
using namespace std;

int reduce_ene(int day, int except_num, vector<int> &c, vector<int> &last){
    int i;
    int sum_reduce;
    sum_reduce = 0;

    for(i=0;i<c.size();i++){
        if(i != except_num-1){
            sum_reduce += c[i] * (day+1 - last[i]);
        }
    }
    return sum_reduce;
}

int plus_ene(int day, vector<int> &t, vector<vector <int> > &s){
    return s[day][t[day] - 1];
}


int ene_cal(int D, vector<int> &t, vector<vector <int> > &s, vector<int> &last, vector<int> &c){
    int day;
    int ene, ene_new;
    ene = 0;
    ene_new = 0;
    for(day=0;day<D;day++){
        ene += plus_ene(day, t, s);  
        ene -= reduce_ene(day, t[day], c, last);
        cout << ene << endl;
        last[t[day] - 1] = day + 1;
    }
    return ene;

}




int main(){
    /* init */

    int i,j;
    int D;
    vector<int> c;
    vector<int> t;

    cin >> D;
    int sum_c; 
    sum_c = 0;
    for(i=0;i<26;i++){
        int ci;
        cin >> ci;
        c.push_back(ci);
        sum_c += ci;
    }


    vector<int> last(c.size(), 0);
    vector<vector <int> > s(D, vector<int>(c.size(), 0));

    for(j=0;j<D;j++){
        for(i=0;i<c.size();i++){
            int sij;
            cin >> sij;
            s.at(j).at(i) = sij;
    }}

    for(i=0;i<D;i++){
        int ti;
        cin >> ti;
        t.push_back(ti);
    }

    //end init
    long int ene;


    ene = ene_cal(D, t, s, last, c);







    return 0;
}
