/*----------USERNAME : AETHERNOX-------*/
/*----------DATE : 15/03/2026----------*/
/*----------TIME : 13:44---------------*/

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Fancy {
  const long long MOD = 1e9 + 7;
  vector<long long> v;
  long long add, mult;

  // FERMAT'S LITTLE THEOREM : a^(p-2) mod(p) = a^-1;
  long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
      if (exp & 1) result = result * base % mod;
      base = base * base % mod;
      exp >>= 1;
    }
    return result;
  }

  long long modInverse(long long a) { return power(a, MOD - 2, MOD); }

public:
  Fancy() : add(0), mult(1) {}

  void append(int val) {
    // NORMALIZE: STORE VALUE AS IF NO GLOBAL TRANSFORMATION HAD BEEN APPLIED
    // STORED VALUE = (val-add)*inv(mult)
    long long stored = (val - add % MOD + MOD) % MOD;
    stored = stored * modInverse(mult) % MOD;
    v.push_back(stored);
  }

  void addAll(int inc) {
    add = (add + inc) % MOD; 
  }

  void multAll(int m) {
    add = add * m % MOD; 
    mult = mult * m % MOD;
  }

  int getIndex(int idx) {
    if (idx >= (int)v.size()) return -1; // EDGE CASE
    return (int)((v[idx] * mult % MOD + add) % MOD);
  }
};

/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */
