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
// struct aninhada
struct Pessoa
{
	std::string Nome;
	Data DtNascimento;
	Endereco Endereco;
};

int main()
{
	Pessoa pessoa01;
	pessoa01.Nome = "Gustavo";
	pessoa01.DtNascimento.Dia = 01;
	pessoa01.DtNascimento.Mes = 05;
	pessoa01.DtNascimento.Ano = 1999;
	pessoa01.Endereco.Rua = " Rua A ";
	pessoa01.Endereco.Cidade = " Sao Francisco ";
	pessoa01.Endereco.Estado = " California ";
	pessoa01.Endereco.Pais = "EUA ";

	std::cout << "Nome: " << pessoa01.Nome << "\n";
	std::cout << "Data Nascimento: " << pessoa01.DtNascimento.Dia << "\\" << pessoa01.DtNascimento.Mes << "\\" << pessoa01.DtNascimento.Ano << "\n";
	std::cout << "Endereco: " << pessoa01.Endereco.Rua << pessoa01.Endereco.Cidade << pessoa01.Endereco.Estado << pessoa01.Endereco.Pais << "\n";
	return 0;
}