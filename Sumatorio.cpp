#include <iostream>
using namespace std;

int sumatoria(int m,int n);

int main(){
int m,n;
    cout << "Ingrese el rango inicial: ";
    cin >> n;
while (n < 0){
    cout << "Ingrese el rango inicial: ";
    cin >> n;
        }
if (n >= 0){
    cout << "Ingrese el rango final: ";
    cin >> m;
    while (m < n){
    cout << "Ingrese el rango final: ";
    cin >> m;
    }
}
 cout << "La suma entre el intervalo [" << n << "," << m << "] es: " << sumatoria(m, n);
 
	return 0;
}

int sumatoria(int m, int n){
    int suma = 0;
    while(n <= m){
        suma = suma + n;
        n++;
    } 
return suma;
}


