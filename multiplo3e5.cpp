#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;

	do
	{
		cout << "Escreva um n�mero:/n",
			cin >> num;
		if (num == 0)
		{
			break;
		}
		if (num % 3 == 0)
		{
			cout << "� m�ltiplo de 3 /n";
		}
		if (num % 5 == 0)
		{
			cout << "� m�ltiplo de 5 /n";
		}

	} while (num != 0);

	return 0;
}
		



