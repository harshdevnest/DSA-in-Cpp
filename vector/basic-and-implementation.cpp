#include <iostream>
#include <vector>
using namespace std;

int main() {

    // 1. Declaration
    vector<int> v;

    // 2. Adding elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 3. Initialization
    vector<int> v2 = {1, 2, 3, 4, 5};

    // 4. Fixed size vector
    vector<int> v3(5, 100);  // {100,100,100,100,100}

    // 5. Copy vector
    vector<int> v4(v2);

    // 6. Traversal (index)
    cout << "v: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 7. Traversal (range-based)
    cout << "v2: ";
    for (int x : v2) {
        cout << x << " ";
    }
    cout << endl;

    // 8. 2D vector
    vector<vector<int>> mat(2, vector<int>(3, 0));

    cout << "2D vector:\n";
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // 9. Vector of pairs
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.push_back({3, 4});

    cout << "Pairs: ";
    for (auto p : vp) {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << endl;

    return 0;
}