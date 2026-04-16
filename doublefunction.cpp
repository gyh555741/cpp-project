#include <iostream>
using namespace std;
//函数重载
//函数名可以相同，只要传入的值不同就可以调用不同的函数

void func(){
    cout << "调用无传入和返回" << endl;
}
void func(int a){
    cout << "调用传入int a无返回" << endl; 
}
//函数重载和默认参数,下面注释掉的函数是错误的，无法和上面这个函数分辨
/*void func(int a,int b=10){
    cout << "调用传入int a,int b=10无返回" << endl; 
}*/
void func(int a,double b){
    cout << "调用传入int a,double b无返回" << endl;
}
void func(double a,int b){
    cout << "调用传入double a,int b无返回" << endl;
}
//函数的返回值不可以作为函数重载的条件，比如下面注释掉的这段代码
/*int func(double a,int b){
    cout << "调用传入double a,int b无返回" << endl;
}*/
//引用作为函数重载的条件
void func1(int &a){
    cout << "调用传入int &a无返回" << endl;
}
void func1(const int &a){
    cout << "调用传入const int &a无返回" << endl;
}
int main()
{
    func();
    func(1);
    func(2.3,1);
    func(4,2.7);
    int a=10;
    func1(a);
    func1(10);

    system("pause");

    return 0;
}