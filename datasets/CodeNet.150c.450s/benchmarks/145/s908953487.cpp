#include <iostream>
#include <map>
#include <string>
#include <sstream>


using namespace std;


int main (int argc, char const* argv[]){
    int n;
    map<string, int> words;
    string sentence, word;
    int max=0, min = 0;
    string maxFreq, maxWord; //最多頻度単語, 最長単語
    
    //文章取得
    getline(cin,sentence);
    stringstream ss(sentence);
    
    while(getline(ss,word,' ')){
        //words内にwordが既に存在するならインクリメント
        if(words.find(word) != words.end()) {
            words[word] += 1;
        }
        //words内にwordがまだ存在しない場合に新たに挿入する
        else{
            words.insert(map<string, int>::value_type(word,1));
        }
    }
    
    
    //最多出現頻度の単語を探す
    map<string, int>::iterator it = words.begin();
    while(it != words.end()){
        if(max < (*it).second){
            max = (*it).second;
            maxFreq = (*it).first;
        }
        if(min < (*it).first.size()){
            min = (*it).first.size();
            maxWord = (*it).first;
        } 
        it++;
    }
    
    
    
    //最多頻度単語と最長単語の出力
    cout <<  maxFreq << " " << maxWord <<  endl;
    
    return 0;
}