#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void Pablo(int N)
{
    int a,b;
    int h[200],w[200];
    fill(h,h+N,0);
    fill(w,w+N,0);

    for(int i=1;i<N;i++)
    {
	cin >> a >> b;
	if(b % 2 == 0)
	{
	    b--;
	    w[i] = w[a] + b;
	    h[i] = h[a];

	}else{
	    b--;
	    b--;
	    h[i] = h[a] + b;
	    w[i] = w[a];
	}
//	cout << "h["<<i<<"] = "<<h[i] <<endl;
//	cout << "w["<<i<<"] = "<<w[i] <<endl;

    }
    int maxh=0,minh=0,maxw=0,minw=0;
    for(int i=0;i<N;i++)
    {
	maxh = max(h[i],maxh);
	minh = min(h[i],minh);
	maxw = max(w[i],maxw);
	minw = min(w[i],minw);
    }
    cout << maxw - minw +1 << " " << maxh - minh +1 << endl;

}

int main()
{
    while(true)
    {
	int N;
	cin >> N;
	if (N == 0) break;
	Pablo(N);
    }

    return 0;
}