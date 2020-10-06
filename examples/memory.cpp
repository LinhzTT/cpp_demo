#include <iostream>
#include <string>

using namespace std;

const int d = 30;
int g = 0;

int main()
{
    int a = 10;
    static int b = 20;
    int* c = new int[10];  // c是局部指针，只是个局部变量，但是它指向的数据是在堆区中
    string e = "aaa";  // 这个是局部变量
    const int f = 0;
    cout << "局部变量地址: " << long(&a) << endl; 
    cout << "静态变量地址: " << long(&b) << endl;
    cout << "堆区内存地址: " << long(&*c) << endl;
    cout << "全局常量地址: " << long(&d) << endl;
    cout << "全局变量地址: " << long(&g) << endl;
    // cout << "局部字符串地址: " << long(&e) << endl;
    cout << "字符串常量地址: " << long(&"aaa") << endl;
    cout << "局部常量地址: " << long(&f) << endl;

    delete[] c;  // 释放堆区地址
    c = nullptr; // 指向空指针
}
