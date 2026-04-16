#include <iostream>
using namespace std;
class point{
    private:
    int m_x;
    int m_y;
    public:
    void setx(int x){
        m_x=x;
    }
    int getx(){
        return m_x;
    }
    void sety(int y){
        m_y=y;
    }
    int gety(){
        return m_y;
    }
};
class circle{
    private:
    point m_center;
    int m_r;
    public:
    void setcenter(point center){
        m_center=center;
    }
    point getcenter(){
        return m_center;
    }
    void setr(int r){
        m_r=r;
    }
    int getr(){
        return m_r;
    }
};
void incircle(circle &c,point &p){
    int rdis=c.getr()*c.getr();
    int pdis=(c.getcenter().getx()-p.getx())*(c.getcenter().getx()-p.getx())+(c.getcenter().gety()-p.gety())*(c.getcenter().gety()-p.gety());
    if(rdis>pdis){
        cout << "在圆内" << endl;
    }else if(rdis==pdis){
        cout << "在圆上" << endl;
    }else{
        cout << "在圆外" << endl;
    }
}
int main()
{
    circle c1;
    point p1;
    point center;
    p1.setx(5);
    p1.sety(8);
    c1.setr(8);
    center.setx(5);
    center.sety(16);
    c1.setcenter(center);
    incircle(c1,p1);
    
    return 0;
}