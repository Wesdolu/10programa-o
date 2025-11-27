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
	int turma[3][3], alunos, i, media;
	
	for (int i = 0; i < 3; i++)
	{
		
		cout << "Digite as notas do " << i+1 << "º aluno\n ";
		for (int j = 0; j < 3; j++)
		{
			cout << "Digite as notas da " << j+1 << "ª disciplinas\n ";

			cin >> turma[i][j];
		}
	}
	cout << "A média das notas de cada aluno é: ";
	for (int i = 0; i < 3; i++)
	{
		media = 0;
		for (int j = 0; j < 3; j++)
		{
			media += turma[i][j];
		}
		cout << "Aluno " << i+1 << ": " << media / 3 << endl;
	}
	


	return 0;
}




















