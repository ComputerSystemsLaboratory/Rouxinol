#include<bits/stdc++.h>
using namespace std;

struct rectangle{
  int h, w;
  bool operator<(const rectangle &a)const{
    if(w*w + h*h == a.w*a.w + a.h*a.h)
      return h < a.h;
    return w*w + h*h < a.w*a.w + a.h*a.h;
  }
};


int main(){
  vector<rectangle> ans;
  for(int i = 1; i <= 150; i++) {
    for(int j = i + 1; j <= 150; j++) {
      rectangle r;
      r.h = i, r.w = j;
      ans.push_back(r);
    }
  }
  sort(ans.begin(), ans.end());
  for(int i = 0; i < 20; i++) {
    //cout << ans[i].h << " " << ans[i].w << endl;
}
  int h, w;
  while(cin >> h >> w, h){
    rectangle r;
    r.h = h, r.w = w;
    for(int i = 0; i < ans.size(); i++){
      if(r < ans[i]){
	cout << ans[i].h << " " << ans[i].w << endl;
	break;
      }
    }
  }
  return 0;
}