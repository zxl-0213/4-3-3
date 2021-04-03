#include<iostream>
#include<list>
using namespace std;

void print(const list<int> l)
{
	list<int>:: const_iterator it = l.begin();
	while (it != l.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}

void test_list()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_front(0);
	lt.push_front(-1);

	list<int>::iterator it = lt.begin();
	while (it != lt.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	list<int>::reverse_iterator rit = lt.rbegin();
	while (rit != lt.rend())
	{
		cout << *rit << " ";
		rit++;
	}
	cout << endl;

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	print(lt);
}

void test_list2()
{
	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);
	lt1.push_back(4);
	lt1.pop_back();
	lt1.push_front(0);
	lt1.pop_front();

	list<int>lt2(lt1);
	list<int> lt3;
	lt3 = lt2;
	print(lt1);
	print(lt2);
	print(lt3);

}

void text_list3()
{
	list<int> lt1;
	lt1.push_back(3);
	lt1.push_back(6);
	lt1.push_back(1);
	lt1.push_back(4);
	lt1.push_back(9);
	lt1.push_back(2);
	print(lt1);

	list<int>::iterator pos = find(lt1.begin(),lt1.end(),3);
	if (pos != lt1.end())
	{
		lt1.insert(pos, 30);
	}
	lt1.erase(pos);
	print(lt1);

	lt1.sort();
	print(lt1);

	lt1.reverse();
	print(lt1);



}
int main()
{
	test_list();

	return 0;
}