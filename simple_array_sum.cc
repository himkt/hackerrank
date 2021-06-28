# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> a(n); for (int i=0; i<n; i++) cin >> a[i];

    int ans = 0;
    for (int a_i: a) ans += a_i;
    cout << ans << endl;
    return 0;
}

