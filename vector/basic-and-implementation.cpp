#include <iostream>
#include <vector>
#include <utility> // For std::pair
using namespace std;



void printVector(const string& label, const vector<int>& v) {
    cout << label << ": [ ";
    for (const int& x : v) {
        cout << x << " ";
    }
    cout << "]" << endl;
}

int main() {
    // --- 1. Basic Vector Operations ---
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Initializer list & Fixed size
    vector<int> v2 = {1, 2, 3, 4, 5};
    vector<int> v3(5, 100);  // Size: 5, Elements: 100
    vector<int> v4(v2);      // Copy Constructor

    printVector("Standard Vector", v);
    printVector("Initialized Vector", v2);
    printVector("Fixed-Size Vector", v3);

    cout << "-----------------------------------" << endl;

    // --- 2. 2D Vector (Matrix) ---
    // Creating a 2x3 matrix initialized with 0
    int rows = 2, cols = 3;
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));

    cout << "2D Matrix (2x3):" << endl;
    for (const auto& row : matrix) {
        cout << "  ";
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------" << endl;

    // --- 3. Vector of Pairs ---
    // Useful for Graph Adjacency Lists or coordinate systems
    vector<pair<int, int>> pairs = {{1, 2}, {3, 4}, {5, 6}};
    
    // Using emplace_back for better performance (constructs in place)
    pairs.emplace_back(7, 8); 

    cout << "Vector of Pairs: ";
    for (const auto& [first, second] : pairs) { // Using C++17 Structured Bindings
        cout << "{" << first << ", " << second << "} ";
    }
    cout << endl;

    return 0;
}
