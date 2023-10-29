#include <bits/stdc++.h>
#include <initializer_list>
#include <scoped_allocator>
#include <system_error>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
//#include <gmpxx.h>
using namespace std;
typedef long long ll;
typedef long long int int64;
#define input(v) for(auto &i : v) cin >> i
#define line(x) getline(cin, x)
#define e "\n"
#define exit exit(EXIT_SUCCESS);
#define revArray(x, n) reverse(x, x+n);
#define all(x)  x.begin(), x.end()

const long long MOD = 1e9+7;

class Fibonacci {
    public:
    long long fib(int n) {
        long long f[n+2];
        f[0] = 1;
        f[1] = 1;
        for (int i=2; i<=n; i++) {
            f[i] = f[i-1]+f[i-2];
        }
        return f[n];
    }
};
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    Fibonacci number;
    cout << number.fib(n) << e;
    
    return (EXIT_SUCCESS);
}
