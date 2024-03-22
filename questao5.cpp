#include <iostream>
#include <string>

std::string inverterStr(std::string str) {
    int tamanho = str.length();
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
    return str;
}

int main() {
    std::string entradaStr;
    std::cout << "Digite uma string: ";
    getline(std::cin, entradaStr);

    std::string stringInvertida = inverterStr(entradaStr);

    std::cout << "String invertida: " << stringInvertida << std::endl;

    return 0;
}
