#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
    string name;
    int age;
    int id;
    int score[4];
    double avergae;

public:
    void input(){
        string s;
        getline(cin,name,',');
        getline(cin,s,',');
        age=stoi(s);
        getline(cin,s,',');
        id=stoi(s);
        for (int i = 0; i < 3; i++)
        {
            getline(cin,s,',');
            score[i]=stoi(s);
        }
        cin>>score[3];
    }

    void calculate(){
        int sum=0;
        for (int i = 0; i < 4; i++)
        {
            sum+=score[i];
        }
        avergae=(double)sum/4;
    }

    void output() const{
        cout<<name<<','<<age<<','<<id<<','<<avergae<<endl;
    }
};

int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}