#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * argv[])
{
int vEscolha;
while (true) {

	printf("Menu:\n1 - 1- X-Bacon\ 2- X-Salada \n\nOpcao:*");
	scanf("%d", &vEscolha);

	//printf("o usuario escolheu a a opcao; %d, vEscolha);
	switch (vEscolha) {

	case 1:
		printf("X-Bacon - Preço: R$ 18.00");

	case 2:
		printf("X-Salada - Preço: R$ 15.00");

	default:
		printf("Voce digitou uma opcao invalida. Tente novamente.n\n\*");
		break;
	}
}
puts("\n\n");
system("PAUSE");
return EXIT_SUCCESS;
}
