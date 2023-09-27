#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int time[86401]={0},n,start,end;
	string str[2],se;
	vector<string> vec;
	string h,m,s,eh,em,es;
	while(cin>>n,n){
		cin.ignore();
		rep(i,86401)time[i]=0;
		string tmp="";
		rep(i,n){
			getline(cin,se);
			rep(j,se.size()){
				if(se[j]==' '){
					str[0]=tmp;
					tmp="";
				}else{
					tmp+=se[j];
				}
			}
			str[1]=tmp;
			tmp="";
			vec.clear();
			rep(j,2){
				rep(i,str[j].size()){
					if(str[j][i]==':'){
						vec.push_back(tmp);
						tmp="";
					}else{
						tmp+=str[j][i];					
					}
				}
				vec.push_back(tmp);
				tmp="";
			}
			h=vec[0];
			m=vec[1];
			s=vec[2];
			eh=vec[3];
			em=vec[4];
			es=vec[5];
			start=((int)(h[0]-'0')*10+(int)(h[1]-'0'))*60*60+((int)(m[0]-'0')*10+(int)(m[1]-'0'))*60+((int)(s[0]-'0')*10+(int)(s[1]-'0'));
			time[start]++;
			end=((int)(eh[0]-'0')*10+(int)(eh[1]-'0'))*60*60+((int)(em[0]-'0')*10+(int)(em[1]-'0'))*60+((int)(es[0]-'0')*10+(int)(es[1]-'0'));
			time[end]--;
		}
		rep(i,86401){
			time[i+1]+=time[i];
		}
		int maximum=0;
		rep(i,86401){
			maximum=max(maximum,time[i]);
		}
		cout<<maximum<<endl;
	}
	return 0;
}