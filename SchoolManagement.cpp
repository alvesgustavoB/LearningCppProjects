#include <iostream>
#include <iomanip>

struct aluno {
    long int Matricula;
    std::string Nome;
    std::string Curso;
    int Semestre;
    double Mensalidade;
}Aluno01 = { 0011, "Gustavo", "TI", 2, 990.5 };

void MostrarDados(aluno Dado) {
    std::cout << "******DADOS DO ALUNO******\n";
    std::cout << "\t Nome: " << std::fixed << std::setprecision(2) << Dado.Nome << std::endl;
    std::cout << "\t Curso: " << std::fixed << std::setprecision(2) << Dado.Curso << std::endl;
    std::cout << "\t Semestre: " << std::fixed << std::setprecision(2) << Dado.Semestre << std::endl;
    std::cout << "\t Matricula: " << std::fixed << std::setprecision(2) << Dado.Matricula << std::endl;
    std::cout << "\t Mensalidade" << std::fixed << std::setprecision(2) << " R$ " << Dado.Mensalidade << std::endl;
    std::cout << "******************************\n";

}
void AlterarDados(aluno& Dado) {

    Dado.Nome = "Rafael";
    Dado.Curso = "ADS";
    Dado.Semestre = 6;
    Dado.Matricula = 0101;
    Dado.Mensalidade = 1200.75;

}
void AlterarDados(aluno* Dado) {
    Dado->Nome = "Rafael";
    Dado->Curso = "ADS";
    Dado->Semestre = 6;
    Dado->Matricula = 0101;
    Dado->Mensalidade = 1200.75;
}

int main() {
    aluno* Aluno02 = new aluno;
    MostrarDados(Aluno01);
    AlterarDados(*Aluno02);
    MostrarDados(*Aluno02);


    system("pause");
    return 0;
}