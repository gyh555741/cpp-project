#include <iostream>
using namespace std;
#include <string>
#define Day 7
int main()
{
    char w='g';
    cout << w <<endl;
    int a = 3;
    cout<<"Day="<<Day<<"\na="<<a<<endl;
    cout<<"long和long long占用的内存"<<sizeof(long)<<"和"<<sizeof(long long)<<endl;
    string c = "wyc";
    cout << c << endl;
    bool x = true;
    bool y = false;
    cout << x << "\n" << y << endl;
    int b = 2;
    cout << (a==b) << endl;
    cout << (a!=b) << endl;
    cout << (a>=b) << endl;
    int score=0;
    cout << "请输入分数" << endl;
    cin >> score;
    if(score>=650){
        cout << "你考了" << score << "分，上成电了" << endl;
    }else if(score>=620){
        cout << "你考了" << score << "分，考上了川大" << endl;
    }else{
        cout << "你考了" << score << "分" << endl;
    }
    int c1 = a < b ? a : b;//三目运算符返回的是变量，可以继续赋值
    cout << c1 << endl;
    int score1=0;
    cout << "请给这个电影打分" << endl;
    cin >> score1;
    switch(score1){//用switch只能是整形或者字符型，不能是区间
        case 10:case 9:
            cout << "best" << endl;
            break;
        case 8:case 7:
            cout << "better" << endl;
            break;
        case 6:case 5:
            cout << "good" << endl;
            break;
        default:
            cout << "bad" << endl;
            break;
    }
    int num=0;
    while(num<10){
        cout << num++ << endl;
    }
    
    system("pause");

    return 0;
}