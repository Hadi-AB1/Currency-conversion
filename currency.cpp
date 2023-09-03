/* Dev: Hadi AB
 * Simple program to calculate the money spent on holiday in Latin America.
 */
 #include <iostream>

int main() {
    int pesos;
    int reais;
    int soles;
    int dollars;
    std::cout <<"Enter number of Colombian Pesos: ";
    std::cin >> pesos; //1 colombian peso= 0.00025$
    std::cout <<"Enter number of Brazilian Reais: ";
    std::cin >> reais; // 1 Brazilian Reais = 0.20$
    std::cout <<"Enter number of Peruvian Soles: ";
    std::cin >> soles; //1 Peruvian soles = 0.27$
    dollars = 0.00025 * pesos + 0.20 * reais + 0.27* soles; // Calculating the total amount spent on the holiday in us dollars.
    std::cout << "US Dollars = $ " << dollars;
    return 0;
}