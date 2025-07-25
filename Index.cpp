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

    if (chute == numeroSecreto)
    {
        cout << "Parabéns! O número secreto é " << numeroSecreto << "!" <<endl;
    }

    else if (chute > numeroSecreto)
    {
        cout << "O número secreto é menor que o chute." <<endl;
    }

    else if (chute < numeroSecreto)
    {
        cout << "O número secreto é maior que o chute.";
    }
    
}