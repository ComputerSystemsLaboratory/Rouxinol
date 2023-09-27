// aaa.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

/** @file report1.cpp @brief 改善対象のソースコード
 *
 *
 *
 *
 * @author Kenta Fjiwara
 * @date 2014/11/21 new
 */

#include <iostream>
#include <algorithm>
using namespace std;

class TEST
{
public:
    int H;          //height
    int W;          //width
    int _ans[2];    //answer
    
    /** Constructor
     *
     * Class initialization
     */
    TEST() {}
    /** input
     *
     *
     * KeyBoard Input
     */
    void input()
    {
        while(cin >> H >> W && H && W)
        {
            exam();
        }
    }
    /** output
     *
     *
     * Answer output
     */
    void output()
    {
     cout << _ans[0] << ' ' << _ans[1]<< endl;
    }
    /** calecuration
     *
     *
     */
    void exam()
    {
        const pair<int, int> given(tkj(H, W), H);
        pair<int, int> best(tkj(150, 150), 150), ans;
        
        for(int h=1; h<=150; ++h)
        {
            for(int w=1; w<=150; ++w)
            {
                if(w<=h)continue;
                // 幅の方が長い長方形を扱う
                pair<int, int> x(tkj(h,w), h);
                
                //pair<int, int>による比較
                if(given < x && x < best)
                {
                    best=x;
                    
                    ans= make_pair(h, w);
                }
            }
        }
        
        _ans[0] = ans.first;
        _ans[1] = ans.second;
        
        output();
    }
    
    
    /** 長方形の対角線の二乗
     *
     * @param h 高さ
     * @param w 幅
     * @return　長方形の対角線の二乗
     *
     */
    int tkj(int h, int w)
    {
        return(h*h + w*w);
    }
    
};


int main()
{
    TEST base;
    base.input();
}