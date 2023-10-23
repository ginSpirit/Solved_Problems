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

string spaceRemove(string &s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    string s;
    cin >> n >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    unordered_set<char>latters;
    sort(s.begin(), s.end());
    int uniqueCharacter = unique(s.begin(), s.end())-s.begin();
    cout << (uniqueCharacter==26? "YES" : "NO") << endl;
    return (EXIT_SUCCESS);
}