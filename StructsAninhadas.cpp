#include <iostream>
#include <string>
struct Data
{
	int Dia, Mes, Ano;
};
struct Endereco
{
	std::string Rua;
	std::string Cidade;
	std::string Estado;
	std::string Pais;
};
//struct aninhada
struct Pessoa
{
	std::string Nome;
	Data DtNascimento;
	Endereco Endereco;
};

int main() {
	Pessoa pessoa01;
	pessoa01.Nome = "Gustavo";
	pessoa01.DtNascimento.Dia = 01;
	pessoa01.DtNascimento.Mes = 05;
	pessoa01.DtNascimento.Ano = 1999;
	std::cout << pessoa01.Nome;
	return 0;
}