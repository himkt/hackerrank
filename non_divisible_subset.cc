# include <iostream>
# include <vector>


using namespace std;


int main() {
    long n, k; cin >> n >> k;
    vector<long> s(n); for (long i=0; i<n; i++) cin >> s[i];
    vector<int> count(k, 0); for (long s_i: s) count[s_i % k]++;
    int ans = 0;

    // t = 0
    ans += min(1, count[0]);

    for (int m=1; m<=k/2; m++) {
        if (k % 2 == 0 && k / 2 == m) {
            // t = k / 2;
            ans += min(1, count[k / 2]);
        }
        else {
            // cout << "m: " << m << ", k-m: " << k-m << endl;
            // decide which numbers whose m or k-m mod k are inserted
            ans += max(count[m], count[k-m]);
        }
    }

    cout << ans << endl;
    return 0;
}

