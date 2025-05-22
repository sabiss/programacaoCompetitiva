#include <iostream>
using namespace std;

int main()
{
    int posicaoAmigo = 0; // 12
    int passos[5] = {1, 2, 3, 4, 5};
    int quantPassos = 0;
    bool parar = false;

    cin >> posicaoAmigo;
    for (int i = 4; i > -1; i--)
    {
        if (posicaoAmigo == 0)
        {
            break;
        }
        while (parar == false)
        {
            if (posicaoAmigo - passos[i] > 0 || posicaoAmigo - passos[i] == 0) // por algum motivo aqui no meu pc o >= não funcionou
            {
                posicaoAmigo = posicaoAmigo - passos[i];
                quantPassos++;
            }
            else
            {
                parar = true;
            }
        }
        parar = false;
    }
    cout << quantPassos << endl;
    return 0;
}