#include <iostream>
using namespace std;
int main()
{
    int number=100;
    do{
        int a=number%10;
        int b=number/10%10;
        int c=number/100;
        if(a*a*a+b*b*b+c*c*c==number){
            cout << number << endl;
        }
    }while(++number<1000);

    system("pause");

    return 0;
}