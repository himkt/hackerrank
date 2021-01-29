# include <algorithm>
# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> candles(n);
    for (int i=0; i<n; i++) cin >> candles[i];

    sort(candles.begin(), candles.end());
    reverse(candles.begin(), candles.end());

    int ans = 0;
    int tallest = candles[0];
    for (auto c: candles) {
        if (c == tallest) ans++;
        else break;
    }

    cout << ans << endl;
    return 0;
}

