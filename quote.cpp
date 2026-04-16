#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int &b=a;//&就是引用，在这里相当于a指向5，b也指向5
//引用必须初始化，不能写成int &b
//如果写b=x，是赋值操作，不是改变引用，引用操作后不可以改变
    cout << "a等于" << a << "\tb等于" << b << endl;
    b=100;
    cout << "a等于" << a << "\tb等于" << b << endl;
    a=50;
    cout << "a等于" << a << "\tb等于" << b << endl;//引用时，改变其中任意一个值，引用的和原来的都要改变

    system("pause");

    return 0;
}