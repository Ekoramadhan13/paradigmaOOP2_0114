#include <iostream>
using namespace std;

class baseclass {
public:
	virtual void perkenalan() {
		cout << "halo saya function dari base class";
	}
};

class derivedclass :public baseclass {
public:
	void perkenalan() {
		cout << "hallo saya function dari derived class";
	}
};

int main()
{
	
}

