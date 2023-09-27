#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<limits>
#include<algorithm>
#include<numeric>
#include<utility>

using ull = unsigned long long int;
using ll = long long int;

int main(){
    std::vector<std::string> num;
    std::vector<int> keta;

    while(true){
        std::string _num;
        int _keta;
        std::cin >> _num >> _keta;

        if(_num == "0" && _keta == 0) break;
        for(int i=_num.size();i<_keta;i++){
            _num+='0';
        }
        num.emplace_back(_num);
        keta.emplace_back(_keta);
    }

    for(int i=0;i<num.size();i++){
        int _diff;
        int diff = std::stoi(num[i]);
        int cnt=1;

        std::vector<int> ans(1000000,0);

        ans[diff]=cnt;

        while(true){
            std::string max_s = std::to_string(diff);
            std::string min_s = std::to_string(diff);

            for(int j=max_s.size();j<keta[i];j++){
                max_s+='0';
                min_s+='0';
            }

            std::sort(max_s.begin(),max_s.end(),std::greater<int>());
            std::sort(min_s.begin(),min_s.end());
            int max = std::stoi(max_s);
            int min = std::stoi(min_s);

            _diff = max-min;
            //std::cout << "diff " << _diff << std::endl;
            cnt++;
            if(ans[_diff]!=0) break;
            else ans[_diff]=cnt;
            diff = _diff;
        }

        std::cout << ans[_diff]-1 << " " << _diff << " " << cnt-ans[_diff] << std::endl;
    }

    return 0;
}
