#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int arraybanana[1][2],i;
	int arraymaça[1][2],j;
	int resultado[1][2];
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arraybanana[i][j];
			arraymaça[i][j];
			
		}
	}
	
	cout << "Digite os valores do array banana:" << endl;
	cin >> arraybanana[i][j];
	cout << "Digite os valores do array maça:" << endl;
	cin >> arraymaça[i][j];

	cout << "O resultado da soma dos arrays é: ";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			resultado[i][j] = arraybanana[i][j] + arraymaça[i][j];
			cout << resultado[i][j] << " ";
		}
	}


			

	
	return 0;
}