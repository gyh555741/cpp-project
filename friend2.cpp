#include <iostream>
#include <string>
using namespace std;
class Building;
class goodgay{
    public:
    goodgay();
    void visit();//让visit可以访问building的私有成员
    void visit2();//让visit2不可以访问building的私有成员
    Building *building;
};
class Building{
    friend void goodgay::visit2();
    public:
    Building();
    public:
    string m_settingroom;//客厅
    private:
    string m_bedroom;//卧室
};
Building::Building(){
    m_settingroom="客厅";
    m_bedroom="卧室";
}
goodgay::goodgay(){
    building=new Building;
}
void goodgay::visit(){
    cout << "visit正在访问" << building->m_settingroom << endl;
    //cout << "visit2正在访问" << building->m_bedroom << endl;    不可以访问
}
void goodgay::visit2(){
    cout << "visit正在访问" << building->m_settingroom << endl;
    cout << "visit2正在访问" << building->m_bedroom << endl;
}
void test01(){
    goodgay g;
    g.visit();
    g.visit2();
}
int main()
{
    test01();

    return 0;
}