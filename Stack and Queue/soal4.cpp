#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int bilangan[N];
    
    for (int i = 0; i < N; ++i) {
        cin >> bilangan[i];
    }
    
    for (int i = 1; i < N; i += 2) {
        cout << bilangan[i] << " ";
    }
    cout << endl;
    
    return 0;
}