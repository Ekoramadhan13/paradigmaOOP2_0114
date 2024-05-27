#include <iostream>
using namespace std;

class abstraksiklas {
private: string x, y;

public:
	void setxy(string a, string b) {
		x = a;
		y = b;
	}
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};
int main()
{
	abstraksiklas ak;
	ak.setxy("yogyakarta", "kampus");
	ak.display();

	return 0;
}

