#include<iostream>
#include<list>
/*����˳����������vector,�б�list,˫�˶���deque
* ��Ҫ����
* 1.��ι�������
* 2.���������������Ԫ��
* 3.��δ�ӡ��������е�Ԫ��
* 4.��β����ɾ�������е�Ԫ��
* 5.��β鿴�����е������ʹ�С
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