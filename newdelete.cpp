#include <iostream>
using namespace std;
int* fun(){
    int* p = new int(10);//new一块内存在堆里面
    return p;
}
int* fun1(){
    int* arr = new int[10];
    for(int i=0;i<10;i++){
        arr[i]=i+100;
    }
    return arr;
}
int main()
{
    int* p = fun();
    cout << *p << endl;
    int* arr = fun1();
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    delete p;//释放堆内存
    delete[] arr;//释放数组的堆内存，要加[]
    cout << *p << endl;//已经被释放，输出乱码

    system("pause");

    return 0;
}