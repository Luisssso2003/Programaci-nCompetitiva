#include <iostream>
#include <cmath> // Para ceil (redondeo hacia arriba)

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c; // a = los datos necesarios por segundo para ver el video, b = datos descargados por segundo, c = duración del video en segundos

    // Aseguramos que a > b como condición del problema
    if (a <= b) {
        cerr << "Error: a debe ser mayor que b." << endl; // Cerr es utilizado como alternativa a cout para garantizar que los mensajes se muestren inmediatamente
        return 1; // Salida por error
    }

    // Calcula el tiempo mínimo de espera
    int min_wait_time = ceil((c * (a - b)) / static_cast<double>(b));
    min_wait_time = max(0, min_wait_time); // Asegura que t no sea negativo

    cout << min_wait_time << endl;
    return 0;
}