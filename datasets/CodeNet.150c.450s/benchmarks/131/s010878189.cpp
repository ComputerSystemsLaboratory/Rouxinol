#include <bits/stdc++.h>
using namespace std;
int main(void){
    string a;
    int l;
    while (cin>>a>>l) {
        if (a=="0"&&l==0) {
            break;
        } else {
            std::deque<int> seq;
            seq.emplace_back(stoi(a));
            int count=1;
            while (1) {
                std::deque<int> tmp;
                if (a.size()<l) {
                    int tmpsize=l-a.size();
                    for (int k=0;k<tmpsize;k++) {
                        a="0"+a;
                    }
                }
                for (int i=0;i<a.size();i++) {
                    int hoge=a.at(i)-48;
                    tmp.emplace_back(hoge);
                }
                sort(tmp.begin(),tmp.end(),greater<int>());
                string max;
                for (int j=0;j<tmp.size();j++) {
                    max=max+to_string(tmp[j]);
                }
                
                //cout<<max<<endl;
                sort(tmp.begin(),tmp.end());
                string min;
                for (int m=0;m<tmp.size();m++) {
                    min=min+to_string(tmp[m]);
                }
                //cout<<min<<endl;
                int piyo=stoi(max)-stoi(min);
                if ( find(seq.begin(),seq.end(),piyo)!=seq.end() ) {
                    int fuga=distance( seq.begin(),find(seq.begin(),seq.end(),piyo) );
                    cout<<fuga<<" "<<piyo<<" "<<count-fuga<<endl;
                    break;
                } else {
                    seq.emplace_back(piyo);
                    count++;
                    a=to_string(piyo);
                    //cout<<piyo<<endl<<endl;
                }
                
            }
        }
    }
}
