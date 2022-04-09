#include <iostream>

using namespace std;
// Definição de constantes em Cpp
#define pi 3.1415
#define github cout << "\n\ndouglasmatosdev\n\n";

int main() {

    // VARIÁVEIS
     // DECLARAÇÃO DE MULTIPLAS VARIÁVEIS
    int vidas=5, tiro=20, live=100;

    // TIPO NOME;
    // TIPO NOME = VALOR;
    char letra='B'; // 'B'
    char letras[20]; // vetor com capacidade para 20 caracteres uma em cada posição
    double decimal=5.2; // 2.4999999
    float decimal2=5.2; // 2.5
    bool vivo=true; // true=verdadeiro / false=falso
    string nome="Douglas"; // "Douglas"

    cout << "Digite o numero de vidas";
    cin >> vidas;
    cout << "Digite seu nome:";
    cin >> nome;

    // imprimindo na tela os valores das variáveis
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";



    // Imprimindo na tela e usando querbra de linha (endl e \n)
    // Usando constantes
    cout << vidas << "\n" << tiro << endl << live << endl << endl;
    cout << pi << "\n\n";

    // Usando constantes
    github

    return 0;
}
