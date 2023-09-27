//0018 Sorting Five Numbers
//®a,b,c,d,eªüÍ³ê½Æ«A~É®ñµÄoÍ·évOðì¬¹æ

//±ñÈsort()Ä×ÎIíéæ¤ÈâèAVÎÈ¢Æ¹¶áÈ¢

#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(void)
{
	const int N = 5;
	int a[N];
	int i;

	//µå¤ªÈ¢©çÉÊÉ
	for(i = 0; i < N; i++)
		cin >> a[i];
	sort(a, a+N, greater<int>());
	for(i = 0; i < N; i++)
		(i ? cout<<' '<<a[i] : cout<<a[i]);
	cout << endl;

	/*
	//±êAVC++¾ÆRpCÅ«éÌÉñoµ½çRpCG[HçÁ½
	//[JNXÍn¹È¢ñ¾Á¯
	struct X
	{
		int operator()(int) { int a;cin >> a;return a;}
	};
	struct Y
	{
		int n;
		Y():n(0){}
		void operator()(int a) { (n++?cout<<' '<<a:cout<<a);}
	};
	transform(a, a+N, a, X());
	sort(a, a+N, greater<int>());
	for_each(a, a+N, Y());
	cout << endl;
	*/

	/*
	//±ê¾ÆAüÍÉEOFªKvÅAoÍÉXy[Xª½­ÈÁÄµÜ¤
	copy(istream_iterator<int>(cin), istream_iterator<int>(), a);
	sort(a, a+N, greater<int>());
	copy(a, a+N, ostream_iterator<int>(cout, " "));
	*/
	return 0;
}