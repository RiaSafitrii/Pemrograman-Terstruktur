#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int bilangan[N];
    int bilanganGanjil[N];
    
    int jumlahBilanganGanjil = 0;
    
    for (int i = 0; i < N; ++i) {
        cin >> bilangan[i];
        
        if (bilangan[i] % 2 != 0) {
            bilanganGanjil[jumlahBilanganGanjil] = bilangan[i];
            jumlahBilanganGanjil++;
        }
    }
    for (int i = 0; i < jumlahBilanganGanjil; ++i) {
        cout << bilanganGanjil[i];
        
        if (i < jumlahBilanganGanjil - 1) {
            cout << " ";
        }
    }
    
    return 0;
}