
#include<iostream>
#include<vector>
using std::vector;

int main (){
    std::cin.tie(0); 
	std::ios::sync_with_stdio(false);
    int CONTEST_PATTERN=26;
    int D;std::cin >> D; //365

    //コンテストごとの満足度の下がりやすさ。添え字はコンテスト種類
    vector<int> c(CONTEST_PATTERN,0);
    for(int i =0;i<CONTEST_PATTERN;++i){
        std::cin >> c[i];
    }

    //コンテスとの満足度。添え字は開催日、コンテスト種類
    vector< vector<int> > s(D,vector<int> (CONTEST_PATTERN,0) );
    for(int i =0;i<D;++i){
        for (int j=0;j<CONTEST_PATTERN;++j){
            std::cin >> s[i][j];
        }
    }

    //コンテスト開催配列。添え字は開催日
    vector<int> t(D,0);
    for (int i=0;i<D;++i){
        std::cin >> t[i];
        --t[i];
    }

    vector<int> lastDay(CONTEST_PATTERN,-1); // 0日スタートを1日開始にするため-1とする
    int satisfaction=0;
    for (int i=0;i<t.size();++i) {
        satisfaction += s[i][t[i]]; //t[i]コンテストの満足度を加算
        lastDay[t[i]]=i; //開催日を更新
        //満足度の減少処理
        for(int j=0;j<CONTEST_PATTERN;++j){
            satisfaction -= c[j] * (i-lastDay[j]);
        }
        std::cout << satisfaction << std::endl;
    }
    return 0;
}