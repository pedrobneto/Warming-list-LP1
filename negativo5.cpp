#include <iostream>
#define HOW_MANY_TIMES 5

using namespace std;

int main()
{

	auto negnum ( 0 );
	auto test ( 0 );

	cout << "Digite " << HOW_MANY_TIMES << " numeros\n\n";

	for(auto i (0) ; i < HOW_MANY_TIMES ; i++ ) {
		cin >> test;

		if(test < 0)
			negnum++;

	}

	cout << "Voce digitou " << negnum << " numero(s) negativos.\n\n";

	return 0;
}