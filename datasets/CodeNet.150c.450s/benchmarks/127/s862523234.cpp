#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<stack>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<map>

#define rep(n,cnt) for(int cnt=0;cnt<n;++cnt)

using namespace std;

template <typename TYPE>
void printArray(TYPE* array, int size){
  rep(size,i) cout << array[i] << "\t" << flush;
  cout << endl;
}

int StringToInt(string str){
  return atoi(str.c_str());
}

double factorial(double n){
  double sum=1;
  for(int i=n;i>=1;i--){
    sum = i*sum;
  }
  return sum;
}

double combination(double n, double k){
  double denominator = 1;
  for(int i=n,j=0;j<k;j++,i--) denominator*=i;
  return denominator/factorial(k);
}

#define MAX_LINE 72

int m;
string train;
map<string, bool> dictionary;
int ans = 0;

string reverse(string str){
    string reverse_str = "";
    for(int i=str.length()-1;i>=0;i--){
	reverse_str += str[i];
    }
    return reverse_str;
}


int main(){
    cin >> m;
    rep(m,i){
	ans = 0;
        dictionary.clear();	

	cin >> train;

        for(int i=train.length()-1;i>0;i--){
            string left = train.substr(0, i);
	    string right = train.substr(i, train.length());
	    string reverse_left = reverse(left);
            string reverse_right = reverse(right);

            if(dictionary.find(left + right) == dictionary.end()){
		dictionary[left+right] = true;
		ans++;
	    }
            if(dictionary.find(left + reverse_right) == dictionary.end()){
                dictionary[left+reverse_right] = true;                
		ans++;
	    }
	    if(dictionary.find(reverse_left + right) == dictionary.end()){
		dictionary[reverse_left + right] = true;
		ans++;
	    }
	    if(dictionary.find(reverse_left + reverse_right) == dictionary.end()){
		dictionary[reverse_left + reverse_right] = true;
		ans++;
	    }
	    if(dictionary.find(right + left) == dictionary.end()){
		dictionary[right + left] = true;
		ans++;
	    }
	    if(dictionary.find(right + reverse_left) == dictionary.end()){
		dictionary[right + reverse_left] = true;
		ans++;
	    }
	    if(dictionary.find(reverse_right + left) == dictionary.end()){
		dictionary[reverse_right + left] = true;
		ans++;
	    }
	    if(dictionary.find(reverse_right + reverse_left) == dictionary.end()){
		dictionary[reverse_right + reverse_left] = true;
		ans++;
	    }
	}
	cout << ans << endl;
    }
}