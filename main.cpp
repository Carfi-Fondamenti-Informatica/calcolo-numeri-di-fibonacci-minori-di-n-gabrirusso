#include <iostream>

using namespace std;
int main() {
    int a = 0, b = 1, c = a+b;
    int n=0;
    cin>>n;


        cout << 1 << endl;
        while (c<=n) {
            cout << c << endl;
            a = b;
            b = c;
            c = a + b;
        }

    return 0;
}
