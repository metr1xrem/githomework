#include <iostream>
using namespace std;

int main()
{
	int ghoul = 1000;
	for (int i = 0; i < 142; i++) {
		ghoul -= 7;
		cout << "1000 - 7 = " << ghoul << endl;
	}
	if (ghoul == 6)
	{
		cout << "I'm Ghoul" << endl;
	}
	cin.get();
}