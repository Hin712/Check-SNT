#include <iostream>
using namespace std;

bool Prime(int n) {
    for (int i = 2; i * i <= n; i ++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    
    if (Prime(n)) {
        cout << n << " la so nguyen to" << endl;
    }
    else cout << n << "khong phai so nguyen to" << endl;
    return 0;
}