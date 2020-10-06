#include <iostream>
#include <string>

using namespace std;


void test1(int arg1, float arg2)
{
    cout << "first argument is : " << arg1;
    cout << " second argument is : " << arg2 << endl;
}

int main()
{
    // 变量定义
    int   var1 = 10;
    float var2 = 1.0;
    string var3 = "a";
    // float var1 = 2.1;  // 无法重定义

    var1 = 20;  // 可以重新赋值
    // var1 = "aaaa";

    test1(var1, var2);
    // test1(var2, var3); // 类型不对

    return 0;
}
