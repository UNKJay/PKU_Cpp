/*
 * new 出来的只有在 delete 的情况下才会调用析构函数
*/

#include <iostream>
using namespace std;
class A {
	public:
		int i;
		A(int x) { i = x; }
    ~A(){
        cout<<i<<endl;
    }
};
int main()
{
	A a(1);
	A * pa = new A(2);
	delete pa;
	return 0;
}