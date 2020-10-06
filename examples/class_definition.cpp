#include <iostream>

using namespace std;

class A
{
    int mVar1 = 0;  // private

public:
    A(){}
    ~A(){}
    int mVar2 = 1;
    void test();

protected:
    int mVar3 = 2;
    
};

void test()
{
    cout << "this is a global test function" << endl;
}

void A::test()
{
    cout << "this is a member of class A" << endl;
}

int main()
{
    A a;
    // cout << "private var1 : " << a.mVar1 << endl;  // 不可访问
    // cout << "protected var3 : " << a.mVar3 << endl;  // 不可访问
    cout << "public var2 : " << a.mVar2 << endl;
   // a.test(); // 类成员函数
   // test();  // 全局函数
    
    return 0;
}
