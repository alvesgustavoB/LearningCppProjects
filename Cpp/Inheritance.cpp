#include <iostream>
class Base {
public:
    void RetornarNum() {
        std::cout << "Num1: ";
        std::cin >> Num1;
        std::cout << "Num2: ";
        std::cin >> Num2;
        MostrarResultados();
    }
private:
    float Num1, Num2;
    float Soma(int N1, int N2) {
        return N1 + N2;
    }
    void MostrarResultados() {
        std::cout << "Soma de: " << Num1 << "+" << Num2 << " = " << Soma(Num1, Num2) << "\n";
    }
};
class Derivada : public Base{
};
int main(){
    Derivada OBJ;
    OBJ.RetornarNum();
 
    return 0;
}
