#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <array>
#include <memory>
#include <cmath>
using namespace std;
//変数デバッグ
#define DEB(variable) cout << #variable << '=' << variable << endl

//for簡易表記(引数ミス防止)
#define FOR(LoopVariable,numberOFbegin,numberOFend) for (int LoopVariable = (numberOFbegin); (LoopVariable) < (numberOFend); (LoopVariable)++)
#define DEFOR(LoopVariable,numberOFbegin,numberOFend) for (int LoopVariable = (numberOFbegin)-1; (LoopVariable) >= (numberOFend); (LoopVariable)--)
#define REP(LoopVariable,numberOFend) for(int LoopVariable = 0;(LoopVariable)<(numberOFend);LoopVariable++)

constexpr long long int linf = numeric_limits<long long int>::max()-5;
constexpr int inf= numeric_limits<int>::max()-5;

template <typename T>
class Segment_tree{
public:
    Segment_tree(int origin_data_num){
        data_num = origin_data_num;
        width = 1;
        depth = 1;
        while(width<data_num){
            width *= 2;
            depth++;
        }

        nodes.resize(2*width-1,0);//ここの値を要求によって変える   ほしいのは...総和:0 総績:1 最小:numeric_limits<int>::max()-5 最大:numeric_limits<int>::min()+5
        changed.resize(2*width-1, true);
    }
    Segment_tree(vector<T> origin_v){
        data_num = origin_v.size();
        width = 1;
        depth = 1;
        while(width<data_num){
            width *= 2;
            depth++;
        }

        nodes.resize(2*width-1,0);//ここの値を要求によって変える   ほしいのは...総和:0 総績:1 最小:numeric_limits<int>::max()-5 最大:numeric_limits<int>::min()+5
        REP(i,data_num){
            nodes[width - 1 + i] = origin_v[i];
        }
        
        changed.resize(2*width-1, false);
        full_update();
    }
    ~Segment_tree(){}

void mini_update(int where){
    int k=(width-1)/2,n=width-1;
    int x = where;

    while(x > 0) {
        x = (x - 1) / 2;
        nodes[x] = nodes[2*x+1]+ nodes[2*x+2];
    }        
}

    void update(){
        int k=(width-1)/2,n=width-1;
        DEFOR(i,depth,0){
            FOR(j,k,n){
                if(changed[2*j+1]||changed[2*j+2]){
                    nodes[j] = nodes[2 * j + 1] + nodes[2 * j + 2];
                    changed[2 * j + 1] = false;
                    changed[2 * j + 2] = false;
                    changed[j] = true;
                }
            }
            n = k;
            k /= 2;
        }
        
    }

    void full_update(){
        int k=(width-1)/2,n=width-1;
        DEFOR(i,depth,0){
            FOR(j,k,n){      
                nodes[j] = nodes[2 * j + 1] + nodes[2 * j + 2];   
            }
            n = k;
            k /= 2;
        }
        
    }

    void leaf_set(int where,T after_value){
        if(where<0||width<where){
            printf("error:out of range!\n");
            return;
        }else if(where>data_num){
            printf("warn:out of originsize\n");
        }
        nodes[width+where-1] = after_value;
        mini_update(width+where-1);
    }
    T get(int where){
        return nodes[where];
    }
    
    T get_leaf(int where){
        return nodes[width + where - 1];
    }

    void all_out(){
        cout << width <<" "<< depth << endl;
        
        REP(i,depth){
            REP(j,pow(2,i)-1){
                cout << nodes[(int)pow(2,i)-1+j] << " ";
            }
            cout <<nodes[(int)pow(2,i+1)-2]<< endl;
            
        }
        printf("\n");
    }
    
    T get_val(int a, int b, int k=0, int l=0, int r=-1) {
    // 最初に呼び出されたときの対象区間は [0, n)
    if(r < 0) r = width;

    // 要求区間と対象区間が交わらない -> 適当に返す
    if(r <= a || b <= l) return 0;

    // 要求区間が対象区間を完全に被覆 -> 対象区間を答えの計算に使う
    if(a <= l && r <= b) return nodes[k];

    // 要求区間が対象区間の一部を被覆 -> 子について探索を行う
    // 左側の子を vl ・ 右側の子を vr としている
    // 新しい対象区間は、現在の対象区間を半分に割ったもの
    T vl = get_val(a, b, 2*k+1, l, (l+r)/2);
    T vr = get_val(a, b, 2*k+2, (l+r)/2, r);
    return vl+ vr;
}
private:
    int width,data_num,depth;
    vector<T> nodes;
    vector<bool> changed;
};

int main(){
    int n,q;

    scanf("%d%d", &n, &q);
    unique_ptr<Segment_tree<int>> seg(new Segment_tree<int>(n));
    int tmp1, tmp2, tmp3;
    REP(i,q){
        //cout << "phase"<<i << endl;
        scanf("%d%d%d", &tmp1, &tmp2, &tmp3);
        tmp2--;
        if(tmp1==0){
            seg->leaf_set(tmp2 , seg->get_leaf(tmp2)+tmp3);
        }else{
            
            printf("%d\n", seg->get_val(tmp2, tmp3));
        }
  
    }


    
    return 0;
}

