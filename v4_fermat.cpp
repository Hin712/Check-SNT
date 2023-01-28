#include <iostream>
#include <cstdlib>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}
    
int ModPower(int a, int b, int mod) {
    if (b == 1) {
        return (a % mod);
    }
    else {
        int x = ModPower(a, b / 2, mod);
            if ((b & 1) == 0) {
                return ((x * x) % mod)
            }
            else {
                return (((x * x) % mod) * a) % mod
            }
    }
}

int Fermat(int n) {
    int a = 2 + rand() % (n - 1);
    if (gcd(a, n) != 1) {
        return 0;
    }
    else if (ModPower(a, n - 1, n) != 1) {
        return 0;
    }
    else return 1;
}

int main() {
    int n;
    cout << "Nhap so n: "
    cin >> n;
    
    if (n <= 1)
        cout << n << " khong phai so nguyen to"
    else if (n == 2 || n == 3)
        cout << n << " la so nguyen to" << endl;
    else if (Fermat(n))
        cout << n << " la so nguyen to" << endl;
    else
        cout << n << " khong phai so nguyen to" << endl;
    return 0;
}
