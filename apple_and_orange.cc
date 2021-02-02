# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int s, t, a, b, m, n; cin >> s >> t >> a >> b >> m >> n;
    vector<int> apples(m); for (int i=0; i<m; i++) cin >> apples[i];
    vector<int> oranges(n); for (int i=0; i<n; i++) cin >> oranges[i];

    int num_apples = 0;
    int num_oranges = 0;
    for (int apple: apples) {
        if (s <= a + apple && a + apple <= t) num_apples++;
    }
    for (int orange: oranges) {
        if (s <= b + orange && b + orange <= t) num_oranges++;
    }

    cout << num_apples << endl;
    cout << num_oranges << endl;
    return 0;
}

