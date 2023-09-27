#include <iostream>
#include <vector>
using namespace std;



int main(){
        int n, k,max,temp,num,total;
        while(true) {  //ベクターに格納
                cin >> n>>k;
                if(n==k!=0) break;
                vector<double> v;
                total=0;
                v.push_back(total);
                for(int i=0;i<n;i++){
                  cin>>num; //入力をnumに代入
                  total+=num;
                  v.push_back(total); //ベクターvにプッシュ
                }

                max=0;
                temp=0;
                for(int i=0; i+k<=n; i++) {
                        temp=v[i+k]-v[i];
                        if(temp>max) max=temp; //tempが最も大きい数値ならmaxを更新
                        temp=0; //tempの初帰化
                }
                cout<<max<<endl;
        }
}
