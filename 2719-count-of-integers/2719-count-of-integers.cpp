// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 15.07.2026 at 15:10:02
//  Contact      : spexcher@gmail.com
//  Linktree     : https://linktr.ee/spexcher/
//  GitHub       : https://github.com/spexcher/
//  LinkedIn     : https://www.linkedin.com/in/gourabmodak/
//  YouTube      : https://www.youtube.com/@spexcher

//  Reminder     : It's a game - we are awarded points.
//                    First to reach 1,000 points wins a tank!
//  Inspiration  : Life is beautiful (1997)
//  Happy Coding! Build, learn, and ship with confidence.
// ======================================================

// Pragmas
// #pragma GCC target("avx2")
#pragma GCC optimization("O3")
// #pragma GCC optimization ("O2")
//  #pragma GCC target("unroll-loops")

// Includes and namespaces
#include <bits/stdc++.h>
#include <chrono>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Ordered Set and Ordered Map
template <typename T>
using oset =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class key, class value, class cmp = less_equal<key>>
using omap =
    tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;

// 1D Stuff
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using i64 = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;

// 2D Vectors
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvb = vector<vb>;
using vvc = vector<vc>;
using vvs = vector<vs>;
using vvpii = vector<vpii>;
using vvpll = vector<vpll>;

// Maps
using mii = map<int, int>;
using mci = map<char, int>;
using msi = map<string, int>;
using umii = unordered_map<int, int>;
using umci = unordered_map<char, int>;
using umsi = unordered_map<string, int>;
using mll = map<ll, ll>;
using mcll = map<char, ll>;
using msll = map<string, ll>;
using umll = unordered_map<ll, ll>;
using umcll = unordered_map<char, ll>;
using umsll = unordered_map<string, ll>;

// Sets
using si = set<int>;
using sll = set<ll>;
using sc = set<char>;

// Heaps
template <class T> using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <class T> using max_heap = priority_queue<T>;

// Shorthands
#define F first
#define S second
#define eb emplace_back
#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

// Functions
#define sqrt(x) sqrtl((x))
#define ceil(x) ceill((x))
#define abs(x) labs((x))
#define floor(x) floorl((x))
#define ceildiv(a, b) ((a + b - 1) / b)
#define sz(x) (ll) x.size()
#define getunique(v) sort(all(v)), v.erase(unique(all(v)), v.end())
#define print(x) cout << x
#define printsp(x) cout << x << " "
#define println(x) cout << x << "\n"
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define sum(v) accumulate(all(v), 0ll)
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())

#define fast_io                                                                \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout << fixed << setprecision(25)

// Prints
#define py cout << "YES\n"
#define pm cout << "-1\n"
#define pn cout << "NO\n"
#define pm cout << "-1\n"
#define pl cout << '\n'
#define nl '\n'
#define sp ' '

// Returns
#define r0 return 0
#define r1 return 1
#define rt return true
#define rf return false

// Loops
#define ff(i, k, n) for (int i = k; i <= n; i++)
#define fr(i, k, n) for (int i = k; i >= n; i -= 1)
#define rep(i, k, n, s) for (int i = k; i <= n; i += s)
#define per(i, k, n, s) for (int i = k; i >= n; i -= s)

/* ===================== RAW INPUT OVERLOADS ===================== */

template <class A, class B> istream& operator>>(istream& in, pair<A, B>& p) {
    return in >> p.first >> p.second;
}

template <class T> istream& operator>>(istream& in, vector<T>& v) {
    for (auto& x : v)
        in >> x;
    return in;
}

template <class T> istream& operator>>(istream& in, vector<vector<T>>& v) {
    for (auto& r : v)
        for (auto& x : r)
            in >> x;
    return in;
}

template <class T> istream& operator>>(istream& in, deque<T>& v) {
    for (auto& x : v)
        in >> x;
    return in;
}

template <class T, size_t N> istream& operator>>(istream& in, array<T, N>& a) {
    for (auto& x : a)
        in >> x;
    return in;
}
/* ===================== RAW OUTPUT OVERLOADS ===================== */

template <class A, class B>
ostream& operator<<(ostream& os, const pair<A, B>& p) {
    return os << p.first << " " << p.second;
}

template <class T> ostream& operator<<(ostream& os, const vector<T>& v) {
    for (auto& x : v)
        os << x << " ";
    return os;
}

template <class T>
ostream& operator<<(ostream& os, const vector<vector<T>>& v) {
    for (auto& r : v) {
        for (auto& x : r)
            os << x << " ";
        os << '\n';
    }
    return os;
}

template <class T> ostream& operator<<(ostream& os, const deque<T>& v) {
    for (auto& x : v)
        os << x << " ";
    return os;
}

template <class T, size_t N>
ostream& operator<<(ostream& os, const array<T, N>& a) {
    for (auto& x : a)
        os << x << " ";
    return os;
}

//--------------Snippet area-------------
// If not defined already
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// Function to convert a string of digits into a vector of integers
vector<int> stringToVector(const string& s) {
    vector<int> digits;
    for (char c : s) {
        digits.push_back(c - '0'); // Convert char to int
    }
    return digits;
}

// Function to convert a vector of integers into a string of digits
string vectorToString(const vector<int>& digits) {
    string s;
    for (int digit : digits) {
        s.push_back(digit + '0'); // Convert int to char
    }
    return s;
}

// Function to add two vectors of digits
vector<int> add(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int carry = 0;
    int n = max(a.size(), b.size());
    for (int i = 0; i < n || carry; ++i) {
        if (i < a.size())
            carry += a[i];
        if (i < b.size())
            carry += b[i];
        result.push_back(carry % 10);
        carry /= 10;
    }
    return result;
}

// Function to subtract two vectors of digits (a >= b)
vector<int> subtract(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int borrow = 0;
    for (int i = 0; i < a.size(); i++) {
        int cur = a[i] - borrow;
        if (i < b.size())
            cur -= b[i];
        if (cur < 0)
            cur += 10, borrow = 1;
        else
            borrow = 0;
        result.push_back(cur);
    }
    // Remove leading zeros (which are trailing in reversed representation)
    while (result.size() > 1 && result.back() == 0)
        result.pop_back();
    return result;
}

// Function to multiply two vectors of digits using elementary multiplication
vector<int> multiply(const vector<int>& a, const vector<int>& b) {
    vector<int> result(a.size() + b.size(), 0);
    for (int i = 0; i < a.size(); ++i) {
        int carry = 0;
        for (int j = 0; j < b.size() || carry; ++j) {
            long long current = result[i + j] + carry;
            if (j < b.size())
                current += (long long)a[i] * b[j];
            result[i + j] = current % 10;
            carry = current / 10;
        }
    }
    while (result.size() > 1 && result.back() == 0) {
        result.pop_back();
    }
    return result;
}

// Wrapper function to multiply two long integer strings
string multiplyStrings(string s1, string s2) {
    reverse(all(s1));
    reverse(all(s2));
    vector<int> a = stringToVector(s1);
    vector<int> b = stringToVector(s2);
    if (a.size() == 1 && a[0] == 0 || b.size() == 1 && b[0] == 0)
        return "0";
    vector<int> result = multiply(a, b);
    reverse(result.begin(), result.end());
    return vectorToString(result);
}
// Wrapper function to add two long integer strings
string addStrings(string s1, string s2) {
    reverse(all(s1));
    reverse(all(s2));
    vector<int> a = stringToVector(s1);
    vector<int> b = stringToVector(s2);
    if (a.size() == 1 && a[0] == 0 || b.size() == 1 && b[0] == 0)
        return "0";
    vector<int> result = add(a, b);
    reverse(result.begin(), result.end());
    return vectorToString(result);
}
// Wrapper function to subtract two long integer strings
// Assumption: s1 >= s2
string subtractStrings(string s1, string s2) {
    reverse(all(s1));
    reverse(all(s2));

    vector<int> a = stringToVector(s1);
    vector<int> b = stringToVector(s2);

    vector<int> result = subtract(a, b);

    reverse(all(result));

    return vectorToString(result);
}

// string s1 = "99";
// string s2 = "99";

// string result = addStrings(s1, s2);
// string result2 = multiplyStrings(s1, s2);

// cout << "Result of multiplying strings: " << result2 << endl;
// cout << "Result of adding strings: " << result << endl;

//--------------End Snippet area---------

// Constants
#define PI 3.1415926535897932384626
#define linf 1e18
#define inf INT_MAX
#define EPS 1e-9
#define mod 1000000007

class Solution {
public:
    ll dp[25][2][500][2];
    ll mis, mas;
    ll ans(int idx, bool tight, int dsum, bool lz, string n) {
        if (idx == sz(n)) {
            println(dsum);
            if (dsum >= mis and dsum <= mas)
                return 1LL;
            else
                return 0LL;
        }
        if (dp[idx][tight][dsum][lz] != -1LL)
            return dp[idx][tight][dsum][lz];
        ll res = 0LL;
        ll ub = (tight) ? (n[idx] - '0') : 9LL;
        ff(dig, 0LL, ub) {
            res = (res%mod + ans(idx + 1, (tight and dig == (n[idx] - '0')),
                             dsum + dig, (lz and dig == 0LL), n)%mod) %
                  mod;
        }
        return dp[idx][tight][dsum][lz] = res;
    }

    int count(string num1, string num2, int min_sum, int max_sum) {
        mis = min_sum;
        mas = max_sum;
        memset(dp, -1, sizeof(dp));
        ll r = ans(0, 1, 0, 1, num2);
        memset(dp, -1, sizeof(dp));
        ll lm1 = ans(0, 1, 0, 1, subtractStrings(num1, "1"));
        return (r - lm1 + mod) % mod;
    }
};