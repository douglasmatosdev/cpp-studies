#include <iostream>

using namespace std;

int main() {

    int tamanho = 5;
    int vetor[tamanho];
    int vetor2[tamanho]={50, 40, 30, 20, 10};
    int i;

    vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;

    //imprimindo manualmente
    /*cout << vetor[0] << endl;
    cout << vetor[1] << endl;
    cout << vetor[2] << "\n";
    cout << vetor[3] << "\n";
    cout << vetor[4] << "\n";
    */

    // imprimindo dinamicamente com loop for
    for (i=0; i<5;i++) {
        cout << vetor[i] << "\n";
    }

    for (i=0; i<sizeof(vetor)/4;i++) {
        cout << vetor[i] << "\n";
    }

     for (i=0; i<tamanho;i++) {
        cout << vetor2[i] << "\n";
    }




    return 0;
}
