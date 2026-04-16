#include <iostream>
using namespace std;
void s(const int &val){
//函数里面不能修改val的值，会报错
    cout << val << endl;
}
int main()
{
    const int &ref=10;
//常量引用
//用来修饰形参，防止误操作
//加上const之后不能改变ref的值，相当于int temp=10；const int &ref=temp
//加上const变成只读，不能改变
    int val = 100;
    s(val);
    cout << val << endl;

    system("pause");

    return 0;
}