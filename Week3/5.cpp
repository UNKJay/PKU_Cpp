#include <iostream>

using namespace std;

const int NUM = 5;      //种类数
class HeadQuatar;
class Warrior;

class Warrior{
    HeadQuatar *h;
    int nameNo;     //名字编号
    int No;         //编号

public:
    static string name[NUM];
    static int initialLifeValue[NUM];
    Warrior(HeadQuatar *h, int nameNo, int No);     //构造函数
    void Print() const;         //打印结果信息
};

class HeadQuatar {
    int totalLifeValue;
    int totalWarrior;
    int color;
public:

};

int main() {

    return 0;
}