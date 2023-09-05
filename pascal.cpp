#include <algorithm>
#include <iostream>
using namespace std;
#define endl "\n"
void fast() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin.exceptions(cin.failbit);
}
long int fact(int n) {
    int f=1;
    for (int i=1; i<=n; i++) {
        f = f*i;
    }
    return f;
}
void pascal_triangle(int n) {
    for (int i=0; i<n; i++) {
        for (int j=n-1; j>i; j--) {
            cout << " ";
        }
        for (int j=0; j<=i; j++) {
            cout << fact(i)/(fact(j)*fact(i-j)) << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;
    pascal_triangle(n);
    return (EXIT_SUCCESS);
}
