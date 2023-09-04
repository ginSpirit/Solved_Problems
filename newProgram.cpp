/*
You consider a number to be cheesy if it is divisible by the sum of its digits.
For example, the sum of the digits of 360 is 9, and 360 is divisible by 9, so 360 is a cheesy number.
On the other hand, the sum of digits of 87 is 15, and 87 is not divisible by 15, so 87 is not a cheesy number.
Given a number n, figure out whether or not it is a cheesy number.
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
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    cin >> s;
    int sum = 0;
    for (int i=0; i<s.length(); i++) {
        sum+=s[i]-48;
    }
    int n = stoi(s);
    for (int i=0; i<sum/2; i++) {
        if (n%sum==0) {
            cout<< "YES" << endl;
            break;
        }
        else {
            cout << "NO" << endl;
            break;
        }
    } 
     return (EXIT_SUCCESS);
}