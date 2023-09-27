#include <iostream>
using namespace std;

struct word{
	char s[32];
	int count;
	int appear;
};
struct word w[1000];
void init(int i)
{
	w[i].appear = 0;

}
void appear(int i)
{
	for(int l=0;l<i;l++){
		bool flag = false;
		if(w[i].s[0]==w[l].s[0]){
			flag = true;
			for(int m=1;m<32;m++){
				if(w[i].s[m]!=w[l].s[m])
					flag = false;
			}
		}
		if(flag)
			w[i].appear++;
	}
}
void l(int i)
{
	for(int l=0;l<32;l++){
		if(w[i].s[l] != 0)
			w[i].count++;
	}
}
int main()
{
	int i=0;
	while(cin >> w[i].s){
		init(i);
		appear(i);
		l(i);
		i++;
	}
	int remi=0,remj=0;
	for(int j=1;j<i;j++){
		if(w[j].appear>w[remi].appear)
			remi = j;
		if(w[j].count>w[remj].count)
			remj = j;
	}
	cout << w[remi].s << " " << w[remj].s << endl;
	return 0;
}