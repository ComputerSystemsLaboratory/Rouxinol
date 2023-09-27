#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calc_deter(pair<int, int> v1, pair<int, int> v2){
    return v2.second*v1.first - v1.second*v2.first;
}

int calc_area(vector<pair<int, int>> vec){
    int ans = 0;
    auto root = vec.begin();
    for(auto it = vec.begin()+1; it+1 != vec.end(); ++it){
        auto p1 = it;
        auto p2 = it+1;
        pair<int, int> v1 = make_pair(p1->first - root->first, p1->second - root->second);
        pair<int, int> v2 = make_pair(p2->first - root->first, p2->second - root->second);
        ans += calc_deter(v1, v2);
    }
    return ans/2;
}

template <class T>
void print_vector(vector<T>& vec){
    for(auto it = vec.begin(); it != vec.end(); ++it){
        cout << '<' << it->first << ", " << it->second << "> ";
        //cout << *it << ' ';
    }
    cout << '\n';
}

void insert_heighest(vector<pair<int, int>>& vec, vector<pair<int, int>>::iterator st,
                     vector<pair<int, int>>::iterator ed, pair<int, int> p){
    for(auto it = ed-1; it != st; --it){
        if(p.second <= it->second){
            vec.erase(it+1, ed);
            vec.insert(it+1, p);
            return;
        }
    }
    vec.erase(st+1, ed);
    vec.push_back(p);
}

template <class T, class U>
void print_vector(vector<pair<T, U>>& vec){
    for(auto it = vec.begin(); it != vec.end(); ++it){
        cout << '<' << it->first << ", " << it->second << "> ";
        //cout << *it << ' ';
    }
    cout << '\n';
}

vector<pair<int, int>> partlist(vector<pair<int, int>> xs){
    auto vec = vector<pair<int, int>>(0);
    vec.push_back(xs[0]);
    int pos = 0;
    int st = 1;
    for(int i = pos+1; i < int(xs.size()); ++i){
        if(xs[i].second >= xs[pos].second){
            vec.erase(vec.begin()+st, vec.end());
            vec.push_back(make_pair(i, xs[i].second));
            ++st;
            pos = i;
            //cout << "v1 ";
            //print_vector(vec);
        } else {
            insert_heighest(vec, vec.begin(), vec.end(), make_pair(i, xs[i].second));
            //cout << "v2 ";
            //print_vector(vec);
        }
    }
    return vec;
}

vector<pair<int, int>> str2list(string str){
    auto vec = vector<pair<int, int>>(0);
    char pre = ' ';
    int h = 0;
    for(int i = 0; i < int(str.size()); ++i){
        if(pre != str[i]){
            vec.push_back(make_pair(i, h));
        }
        pre = str[i];
        if(pre == '/'){
            ++h;
        } else if(pre == '\\'){
            --h;
        }
    }
    vec.push_back(make_pair(str.size(), h));
    return vec;
}


int main(){
    char str[20010];
    scanf("%s", str);
    auto vec = str2list(string(str));
    auto pounds = partlist(vec);
    //print_vector(vec);
    //print_vector(pounds);

    auto areas = vector<int>();
    for(auto it = pounds.begin(); it+1 != pounds.end(); ++it){
        auto p1 = it;
        auto p2 = it+1;
        auto vs = vector<pair<int, int>>();
        if(p1->second > p2->second){
            vs.push_back(make_pair(vec[p1->first].first+(p1->second - p2->second), vec[p2->first].second));
            for(int i = p1->first+1; i < p2->first; ++i){
                vs.push_back(vec[i]);
            }
            vs.push_back(make_pair(vec[p2->first].first, vec[p2->first].second));
        } else {
            vs.push_back(make_pair(vec[p1->first].first, vec[p1->first].second));
            for(int i = p1->first+1; i < p2->first; ++i){
                vs.push_back(vec[i]);
            }
            vs.push_back(make_pair(vec[p2->first].first-(p2->second - p1->second), vec[p1->first].second));
        }
        //print_vector(vs);
        int area = calc_area(vs);
        if(area > 0) areas.push_back(area);
    }
    int sum = 0;
    for(auto x : areas) sum += x;
    cout << sum << '\n';
    cout << areas.size();
    for(auto it = areas.begin(); it != areas.end(); ++it){
        cout << ' ' << *it;
    }
    cout << '\n';

}