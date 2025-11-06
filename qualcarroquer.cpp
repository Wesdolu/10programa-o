#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string carros[3] = { "Volvo", "BMW", "Ford" };
	int n;
		char sair;
		sair = 'n';

    do
	{
			cout << " Escolha um carro ( 0 a 2):\n ";
			cin >> n;
		
				if (n < 0 || n > 2)
				{
		cout << " Esse n é inválido. Tente novamente.\n";

		}
	 else
	    {
		 cout << " O carro escolhido foi: " << carros[n] << "\n";
		}
		cout << "Deseja sair? (s/n):\n ";
		cin >> sair;
	} while (sair =='n');
	return 0;
}