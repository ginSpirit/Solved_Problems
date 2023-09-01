/*
Autor : MD. Maksudur Rahman.
@gin_spirit(cf)
You consider a string of text to be boring if it contains only "a" characters and "b" characters.
For example, "abbaba" is boring, while "abcccbabc" is not boring. If s is boring, as described above,
output "YES" (no quotes). Otherwise, output "NO".
*/
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <climits>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;

typedef long long ll;
#define endl "\n"
void fast() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin.exceptions(cin.failbit);
}
bool number_serach(string line) {
    for (int index=0; index<line.length(); index++) {
        if (line[index]!='a' && line[index]!='b') {
            return false;
        }
    }
    return true;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    fast();
    string s;
    cin >> s;
    if (number_serach(s)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return (EXIT_SUCCESS);
}
