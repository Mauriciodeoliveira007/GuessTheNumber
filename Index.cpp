#include <iostream>
using namespace std;

int main()
{
    //Criação de variáveis
    int numeroSecreto = 0;
    int chute = 0;

    cout << "Jogo da adivinhação" <<endl <<endl;

    cout << "Escolha um número para chutar: ";
    cin >> chute;

    cout << "Seu chute é " <<chute <<endl;

    bool acertou = chute == numeroSecreto;
    bool maiorque = chute > numeroSecreto;
    bool menorque = chute < numeroSecreto;

    if (acertou)
    {
        cout << "Parabéns! O número secreto é " << numeroSecreto << "!" <<endl;
    }

    else if (menorque)
    {
        cout << "O número secreto é menor que o chute." <<endl;
    }

    else if (maiorque)
    {
        cout << "O número secreto é maior que o chute." << endl;
    }
    
}