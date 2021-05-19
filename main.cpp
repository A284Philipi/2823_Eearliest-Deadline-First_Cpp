#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int cont = 0, casos;
    double soma, num1, num2;
    cin >> casos;
    while (cont < casos){
        cin >> num1;
        cin >> num2;
        soma = soma + (num1 / num2);
        cont++;
    }
    if (soma <= 1.0){
        cout << "OK" <<endl;
    }else{
        cout << "FAIL" <<endl;
    }
    return 0;
}
