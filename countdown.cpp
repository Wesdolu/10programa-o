#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
    cout << "Introduza um número inteiro para a contagem decrescente: ";
    cin >> num;
    cout << "Contagem decrescente a partir de " << num << ":\n";
    for (int i = num; i >= 0; i--) {
        cout << i << "\n";
    }
	return 0;
}