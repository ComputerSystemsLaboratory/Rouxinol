#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
  int n;
  string t_str;
  string h_str;
  string taro[1009];
  string hanako[1009];
  int t_score=0;
  int h_score=0;

  int i;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> t_str >> h_str;
    transform(t_str.begin(),t_str.end(),t_str.begin(),::tolower);
    transform(h_str.begin(),h_str.end(),h_str.begin(),::tolower);
    taro[i]=t_str;
    hanako[i]=h_str;
  }

  for(i=0;i<n;i++){
    if(taro[i]>hanako[i])
      t_score+=3;
    else if(taro[i]<hanako[i])
      h_score+=3;
    else{
      t_score+=1;
      h_score+=1;
    }
  }
  cout << t_score << " " << h_score << endl;
}