#include <iostream>
#include <cstring>
using namespace std;

class Array2 {
    int *p;
    int r,c;
public:
    Array2() {p = nullptr;}
    Array2(int _r,int _c):r(_r),c(_c) {
        p = new int[r*c];
    }
    // Array2(const Array2& a):r(a.r),c(a.c){
    //     p=new int[r*c];
    //     memcpy(p,a.p,sizeof(a.p));
    // }

    ~Array2(){
        if (p)
            delete []p;
    }

    Array2& operator=(const Array2& a){
        if (p)
            delete []p;
        if (a.p) {
            r=a.r;
            c=a.c;
            p=new int[r*c];
            memcpy(p,a.p,sizeof(int)*r*c);
        }
        else
        {
            p=nullptr;
        }
        return *this;
    }
    int* operator[](int i) {
        return p + i*c;
    }

    int& operator()(int i,int j){
        return p[i*c+j];
    }
};

int main() {
    Array2 a(3,4);
    int i,j;
    for(  i = 0;i < 3; ++i )
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}