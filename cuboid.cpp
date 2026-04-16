#include <iostream>
using namespace std;
class cuboid{
    private:
    int m_l;
    int m_w;
    int m_h;
    public:
    void setl(int l){
        m_l=l;
    }
    int getl(){
        return m_l;
    }
    void setw(int w){
        m_w=w;
    }
    int getw(){
        return m_w;
    }
    void seth(int h){
        m_h=h;
    }
    int geth(){
        return m_h;
    }
    int S(){
        return (m_l*m_h+m_l*m_w+m_w*m_h)*2;
    }
    int V(){
        return m_l*m_w*m_h;
    }        
    //利用成员函数判断
    bool issamebyclass(cuboid &c){
        if(m_l==c.getl()&&m_w==c.getw()&&m_h==c.geth()){
            return 1;
        }
        return 0;
    }                            
};
//利用全局函数判断
bool issame(cuboid &c1,cuboid &c2){
    if(c1.getl()==c2.getl()&&c1.getw()==c2.getw()&&c1.geth()==c2.geth()){
        return 1;
    }
    return 0;
}
int main()
{
    cuboid c1;
    cuboid c2;
    c1.setl(10);
    c1.setw(20);
    c1.seth(30);
    c2.setl(10);
    c2.setw(20);
    c2.seth(31);
    cout << c1.getl() << endl;
    cout << c1.getw() << endl;
    cout << c1.geth() << endl;
    if(c1.S()==c1.V()){
        cout << "right" << endl;
    }else cout << "false" << endl;
    if(issame(c1,c2)){
        cout << "right" << endl;
    }else cout << "false" << endl;
    if(c1.issamebyclass(c2)){
        cout << "right" << endl;
    }else cout << "false" << endl;

    return 0;
}