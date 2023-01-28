#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n <= 3) {
        return n > 1;
    }
    else
        if (n % 2 == 0) || (n % 3 == 0) {
            return false;
        }
        
    int i = 5;
    while (i * i <= n) {
        if (n % i== 0) || (n % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
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