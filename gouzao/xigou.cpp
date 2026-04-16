#include <iostream>
using namespace std;
//构造函数直接写xxx(){}，析构函数xie~xxx(){},不写这两种函数，编译器会自己写和调用
class person{
    public:
    person(){
        cout << "person构造函数的调用" << endl;
    }
    ~person(){
        cout << "person析构函数的调用" << endl;
    }
};
void test1(){
    person p;
}
int main()
{
    test1();//会执行析构,因为test1是栈上的数据
    person p;//不会执行析构函数

    system("pause");
    return 0;
}