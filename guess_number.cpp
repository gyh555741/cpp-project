#include <iostream>
using namespace std;
int main()
{
    int number=rand()%100+1;
    cout << "我想好了一个随机数，开始猜数吧" << endl;
    int w=0;
    int max=100,min=1;
    while(w!=number){
        cin >> w;
        if(w>number){
            max=w;
            cout << "你输入的数太大了，从" << min << "到" << max << "猜" << endl;
        }else if(w<number){
            min=w;
            cout << "你输入的数太小了，从" << min << "到" << max << "猜" << endl;
        }
    }
    cout << "恭喜你猜对了，答案是" << w << endl;

    system("pause");

    return 0;
}