#include <iostream>
using namespace std;
//值传递
void change1(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
//地址传递
void change2(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//引用传递
void change3(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10;
    int b=20;
    change1(a,b);
    cout << a << endl;
    cout << b << endl;
    a=30;
    b=40;
    change2(&a,&b);
    cout << a << endl;
    cout << b << endl;
    a=50;
    b=60;
    change3(a,b);
    cout << a << endl;
    cout << b << endl;

    system("pause");

    return 0;
}