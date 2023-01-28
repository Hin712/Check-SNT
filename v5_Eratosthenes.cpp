#include <iostream>
using namespace std;
#define e 1000000

int Prime[e + 1];

void Sieve(int n) {
    for (int i = 0; i <= n; i++) Prime[i] = 1;

    Prime[0] = Prime[1] = 0;

    for (int i = 2; i * i <= n; i++)
    if (Prime[i]) {
        for (int j = i * i; j <= n; j += i) {
            Prime[j] = 0;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    
    if (Prime[n]) cout << n << " la so nguyen to" << endl;
    else cout << n << " khong phai so nguyen to" << endl;
    return 0;
}
