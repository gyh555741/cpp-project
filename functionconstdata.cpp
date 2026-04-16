#include <iostream>
using namespace std;
//如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都要有默认参数
int w(int a=10,int b=30,int c=20){
    return a+b+c;
}
//如果函数声明有了默认参数，那么函数实现就不能有默认参数
int w1(int x=10,int y=20);//函数的声明
int main()
{
//函数默认参数
//如果没有传入值就用默认定义的值，如果传入了值就用传入的值

    cout << w(20) << endl;

    system("pause");

    return 0;
}
int w1(int x,int y){//函数的实现
    return x+y;
}