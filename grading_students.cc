# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    int grade;
    int next_multiple;
    for (int i=0; i<n; i++) {
        cin >> grade;
        if (grade % 5 == 0) cout << grade << endl;
        else {
            next_multiple = (1 + (grade / 5)) * 5;
            if (next_multiple - grade <= 2 && grade >= 38) {
                cout << next_multiple << endl;
            }
            else {
                cout << grade << endl;
            }
        }
    }
    return 0;
}

