#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        // Si n es menor que k, debemos hacer que la suma sea divisible por k
        if (n < k) {
            cout << (k + n - 1) / n << endl; // Esto es para asegurarnos de que la suma sea divisible por k
        } else {
            cout << (n % k == 0 ? 1 : 2) << endl; // Si n es divisible por k, el resultado es 1, de lo contrario, es 2
        }
    }
    return 0;
}
