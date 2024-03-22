/* 2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.



IMPORTANTE:

Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/

#include <iostream>

bool Fibonacci(int num) {
    if (num <= 1) {
        return true;
    }
    
    int a = 0, b = 1;

    while (b < num) {
        int c = a + b;
        a = b;
        b = c;
    }
    
    return b == num;
}

int main() {
    int num;

    std::cout << "Digite um número para checar se faz parte da sequência de Fibonacci: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Digite um número positivo!\n";
    }
    else {
        if (Fibonacci(num)) {
            std::cout << "O número " << num << " faz parte da sequência de Fibonacci.\n";
        }
        else {
            std::cout << "O número " << num << " não faz parte da sequência de Fibonacci.\n";
        }
    }

    return 0;
}
