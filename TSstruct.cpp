#include <iostream>
using namespace std;
#include <string>
#include <ctime>
struct student{
    string sname;
    int score;
};
struct teacher{
    string tname;
    struct student sarray[5];
};
void alloactspace(struct teacher* tarray,int len){
    string nameseed="ABCDE";
    for(int i=0;i<len;i++){
        tarray[i].tname="teacher_";
        tarray[i]. tname+=nameseed[i];
        for(int j=0;j<5;j++){
            tarray[i].sarray[j].sname="student_";
            tarray[i].sarray[j].sname+=nameseed[j];
            tarray[i].sarray[j].score=rand()%41+60;
        }
    }
}
void print(struct teacher* tarray,int len){
    for(int i=0;i<len;i++){
        cout << "老师名字是：" << tarray[i].tname << endl;
        for(int j=0;j<5;j++){
            cout << "\t学生名字是：" << tarray[i].sarray[j].sname << endl;
            cout << "\t学生成绩是：" << tarray[i].sarray[j].score << endl;
        }
    }
}
int main()
{
    srand((unsigned int) time(NULL));//随机数种子，需包含头文件ctime
    struct teacher tarray[3];
    int len=sizeof(tarray)/sizeof(tarray[0]);
    alloactspace(tarray,len);
    print(tarray,len);

    system("pause");

    return 0;
}