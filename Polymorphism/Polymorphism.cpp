#include <iostream>
#include <vector>

using namespace std;

class Symbols
{
public:
	virtual void print_tree() {}
};

class Plus : public Symbols
{
public:
	void print_tree() override
	{
		cout <<"\n /  \\\n";
		cout << "/ ++ \\\n";
	}
};

class Star : public Symbols
{
public:
	void print_tree() override
	{
		cout << "\n /  \\\n";
		cout << "/ ** \\\n";
	}
};

class Slash : public Symbols
{
public:
	void print_tree() override
	{
		cout << "\n / \\\n";
		cout << "// \\\\\n";
	}
};

//class Trees
//{
//public:
//	void print_tree(Symbols* sym) {
//		sym->print_tree();
//	}
//};

int main()
{
	Plus pl;
	Star st;
	Slash sl;

	vector<Symbols*> vec;

	vec.push_back(&pl);
	vec.push_back(&st);
	vec.push_back(&sl);

	for (size_t i = 0; i < vec.size(); i++)
	{
		vec[i]->print_tree();
	}

}