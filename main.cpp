#include<iostream>
#include<list>
/*对于顺序容器向量vector,列表list,双端队列deque
* 需要掌握
* 1.如何构造容器
* 2.如何想容器中推入元素
* 3.如何打印输出容器中的元素
* 4.如何插入和删除容器中的元素
* 5.如何查看容器中的容量和大小
*/

using namespace std;
class A
{
public:
	A() { cout << "A::A()" << endl; }
	~A() { cout << "A::~A()" << endl; }
};
class B :public A
{
public:
	B() { cout << "B::B()" << endl; }
	~B(){ cout << "B::~B()" << endl; }
};
class C :public B
{
public:
	C() { cout << "C::C()" << endl; }
	~C() { cout << "C::~C()" << endl; }
};
int main()
{
	A* p = new C();
	delete p;
	system("pause");
	return 0;
}