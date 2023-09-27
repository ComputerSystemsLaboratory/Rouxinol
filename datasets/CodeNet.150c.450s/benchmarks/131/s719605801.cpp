#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int max,min,dif,t,count,word_size,end;
  int c_a,point,i,j;
  string p = "0";

  while(1){
    string v;
    vector<int> vec;
    i = 0;
    end = 0;
    word_size = 0;

    cin>>v>>count;

    if(v == "0" && count == 0){
      break;
      }

    for(char e : v){
      word_size++;
    }

    c_a = count - word_size;

    for(int q = 0;q < c_a;++q){
      v = p+v;
    }

    point = atoi(v.c_str());

    vec.push_back(point);

    while(1){
      i++;
      sort(v.begin(),v.end());
      min = atoi(v.c_str());

      reverse(v.begin(),v.end());
      max = atoi(v.c_str());

      dif = max - min;

      j = 0;

      for(int e : vec){
        if(dif == e){
          end = 1;
          break;
        }
        j++;
      }

      if(end == 1){
        cout<<j<<" "<<dif<<" "<<i-j<<endl;
        break;
      }
      vec.push_back(dif);
      v = to_string(dif);
      word_size = 0;

      for(char e : v){
        word_size++;
      }
      c_a = count - word_size;

      for(int q = 0;q < c_a;++q){
        v = p+v;
      }
    }
  }

  return 0;
}