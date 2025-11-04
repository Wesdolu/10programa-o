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
	int N, M;
	
	
	cin >> N; 
	cin >> M;

	if (N != 0) {
		cout << "Resultado das fatias para cada um: " << N / M << endl;
	}
	else {
		cout << "Erro: Divisão por zero não é permitida!" << endl;
	}
	    

	return 0;
}