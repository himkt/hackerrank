# include <iostream>
# include <vector>


using namespace std;


int main() {
    int x1, v1, x2, v2; cin >> x1 >> v1 >> x2 >> v2;

    if (v1 == v2) {
        if (x1 == x2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else {
        int diff_x = x1 - x2;
        int diff_v = v2 - v1;

        if (diff_x % diff_v == 0 && diff_x / diff_v > 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

