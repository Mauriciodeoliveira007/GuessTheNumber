#include <iostream>
using namespace std;

int main()
{
    //Criação de variáveis
    const int NUMERO_SECRETO = 50;
    int chute = 0;

    cout << "Jogo da adivinhação" <<endl <<endl;

    bool naoAcertou = true;

    while (naoAcertou) {
        cout << "Escolha um número para chutar: ";
        cin >> chute;

        bool acertou = chute == NUMERO_SECRETO;
        bool maiorque = chute < NUMERO_SECRETO;
        bool menorque = chute > NUMERO_SECRETO;

        if (acertou)
        {
            cout << "Parabéns! O número secreto é " << NUMERO_SECRETO << "!" <<endl;
            naoAcertou = false;
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

    
    
}