#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
 
int waniSort(int number,int times)
{
    int num_h=0,num_l=0,num_k=1,ans;
    vector<int> higi;
    vector<int> low;
     
    int num[times];
    num[1] = number;
    for (int i=0; i<times; i++)
    {
        higi.push_back(num[i+1]%10);
        low.push_back(num[i+1]%10);
        num[i+2] = num[i+1]/10;
    }
     
    sort(higi.begin(), higi.end(),greater<int>());
    sort(low.begin(), low.end());
    for (int i=0; i<times; i++)
    {
        int k = times - i - 1;
        num_h += (higi.at(k)*num_k);
        num_l += (low.at(k)*num_k);
        num_k *= 10;
    }
    ans = num_h - num_l;
    return ans;
};
 
int main()
{
    int number=100,times=100,ans[20];
    int ans_i,ans_j,ans_num;
     
    while ((number + times)!= 0) {
        cin >> number >> times;
        ans_i = -1;
        ans[0] = number;
        for (int i=0; i<21; i++)
        {
            ans[i+1] = waniSort(ans[i], times);
            for (int k=0; k<i+1; k++)
            {
                if (ans[i+1] == ans[k])
                {
                    ans_i = i - k + 1;
                    ans_num = ans[i+1];
                    ans_j = k;
                    break;
                }
            }
             
            if (ans_i != -1)
            {
                break;
            }
        }
        if ((number + times) == 0) {
            break;
        }
        cout << ans_j << " "<< ans_num << " " << ans_i << endl;
    }
    return 0;
}