#include <bits/stdc++.h>
#include <initializer_list>
#include <scoped_allocator>
#include <system_error>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef long long ll;
typedef long long int int64;
#define input(v) for(auto &i : v) cin >> i
#define line(x) getline(cin, x)
#define endl "\n"
#define exit exit(EXIT_SUCCESS);
#define revArray(x, n) reverse(x, x+n);
#define all(x)  x.begin(), x.end()

const long long MOD = 1e9+7;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    string s;
    cin >> n >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    bool latter[26] = {false};
    for (char c:s) {
        if(isalpha(c)) {
            latter[c-'a'] = true;
        }
    }
    bool isPangram = true;
    for (bool i : latter) {
        if(!i) {
            isPangram = false;
            break;
        }
    }
    cout << (isPangram? "YES" : "NO") << endl;
    return (EXIT_SUCCESS);
}
