#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=1;i<=n;++i){
		if(i%3==0)
			a.push_back(i);
		else if(i%10==3)
			a.push_back(i);
		else if(i/10%10==3)
			a.push_back(i);
		else if(i/100%10==3)
			a.push_back(i);
		else if(i/1000%10==3)
			a.push_back(i);


	}
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();++i){
	cout<<" "<<a[i];
	}
	cout<<endl;

	return 0;
}





/*void call(int n){
  int i = 1;
 CHECK_NUM:
  int x = i;
  if ( x % 3 == 0 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
 INCLUDE3:
  if ( x % 10 == 3 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10;
  if ( x ) goto INCLUDE3;
 END_CHECK_NUM:
  if ( ++i <= n ) goto CHECK_NUM;

  cout << endl;

}

int main()
{
	call(30);
}*/