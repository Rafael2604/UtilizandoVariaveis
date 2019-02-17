#include <iostream>
#include <tchar.h>
int main()
{
	//Função que configura o Console Windows para Mostrar Acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	int NumVidas = 5;
	int Pontuacao = 1350;
	std::cout << "***** INICIO DO JOGO *****" << std::endl;
	std::cout << "Vidas Jogador" << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Tamanho da Variavel NumVidas: " << sizeof(NumVidas) << "Bytes" << "\n";
	std::cout << "Tamanho da Variavel Pontuação: " << sizeof(Pontuacao) << "Bytes" << "\n";
	std::cout << "Endereço que NumVidas Ocupa na Memoria RAM: " << &NumVidas << "\n";
	std::cout << "Endereço que Pontuação Ocupa na Memoria RAM: " << &Pontuacao << "\n";
	std::cout << "*******************************" << std::endl;

	std::cout << "***** DURANTE O JOGO *****" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "*********************************" << std::endl;

	system("Pause");
}
