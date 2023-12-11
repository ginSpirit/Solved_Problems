/*
    author : MD. MAKSUDUR RAHMAN
    codeforces username : gin_spirit
    problm link : https://codeforces.com/gym/102644/problem/C
*/
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
#define endl "\n"
#define exit exit(EXIT_SUCCESS);
#define revArray(x, n) reverse(x, x+n);
#define all(x)  x.begin(), x.end()
#define lowercase(s) transform(s.begin(), s.end(),s.begin(), ::tolower)
#define uppercase(s) transform(s.begin(), s.end(),s.begin(), ::toupper)
#define multi_string cin.ignore(); 

const long long MOD = 1e9+7;
// define a 2*2 matrix
struct Matrix {
    int64 a, b, c, d;
};
// Multiplying two matrices
Matrix multiply (const Matrix&m1, const Matrix&m2) {
    Matrix result;
    result.a = ((m1.a*m2.a)%MOD+(m1.b*m2.c)%MOD)%MOD;
    result.b = ((m1.a*m2.b)%MOD+(m1.b*m2.d)%MOD)%MOD;
    result.c = ((m1.c*m2.a)%MOD+(m1.d*m2.c)%MOD)%MOD;
    result.d = ((m1.c*m2.b)%MOD+(m1.d*m2.d)%MOD)%MOD;

    return result;
}
// compute the power of a two matrix
Matrix power(const Matrix& base, int64 exp) {
    if (exp == 1) {
        return base;
    }
    if (exp % 2 == 0) {
        Matrix half_pow = power(base, exp / 2);
        return multiply(half_pow, half_pow);
    } else {
        Matrix half_pow = power(base, (exp - 1) / 2);
        return multiply(multiply(half_pow, half_pow), base);
    }
}
// Efficient fibonacci calculation using matrix expotentiation 
long long fib(long long n) {
    if(n<=1) {
        return n;
    }
    Matrix base = {1, 1, 1, 0};
    Matrix result = power(base, n-1);

    return result.a;
}
//@gin_spirit
signed main() { 
    cin.tie(nullptr)->sync_with_stdio(false);

    long long n; cin >> n;
    cout << static_cast<int64>(fib(n)) << endl;
    return (EXIT_SUCCESS);
}
