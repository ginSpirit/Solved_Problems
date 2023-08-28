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
} // create your own algorithm;
void intraswapping() {
    string s;
    cin >> s;
    if(s.length()%2==0) {
        for (int i=0; i<s.length(); i+=2) {
            swap(s[i], s[i+1]);
        }
    }
    else{
        for (int i=0; i<s.length()-1; i+=2) {
            swap(s[i], s[i+1]);
        }
    }
    cout << s << endl;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    fast();
    int t;
    cin >> t;
    while(t--) {
        intraswapping();
    }

    return 0;
}