#include<iostream>
#include<vector>

class TestScore{
private:
    std::vector<int> dataset = {0,0,0,0};
public:
    void setTestScore(int info,int math,int scie,int eng);
    int getTotalScore();
};

void TestScore::setTestScore(int info,int math,int scie,int eng){
    dataset[0] = info;
    dataset[1] = math;
    dataset[2] = scie;
    dataset[3] = eng;
}

int TestScore::getTotalScore(){
    int total_score = 0;
    for(int score : dataset){
        total_score += score; 
    }
    return total_score;
}

int largeScore(int a,int b){
    if(a < b){
        return b;
    }
    return a;
}

int main(){

    TestScore ts1 = TestScore();
    TestScore ts2 = TestScore();

    int a,b,c,d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    
    std::cin >> a >> b >> c >> d;
    ts1.setTestScore(a,b,c,d);

    std::cin >> a >> b >> c >> d;
    ts2.setTestScore(a,b,c,d);

    std::cout << largeScore(ts1.getTotalScore(),ts2.getTotalScore()) << std::endl;

    return 0;
}