#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    long long n;
    cin >> n;
    vector<bool> fibonacciPrime{0,0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0};
    while(n--) {
        int x;
        cin >> x;
        cout << (fibonacciPrime[x]? "prime" : "not prime") << endl;
    }
    return (EXIT_SUCCESS);
}
