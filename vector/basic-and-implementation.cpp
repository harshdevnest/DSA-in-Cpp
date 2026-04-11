#include <iostream>
#include <vector>
#include <string>  // Required for string parameters
#include <utility> // Required for pair

using namespace std;

// Function to print a 1D vector clearly
void printVector(string label, const vector<int>& v) {
    cout << label << ": [ ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << "]" << endl;
}

int main() {
    // 1. Basic Operations
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    vector<int> v2 = {1, 2, 3, 4, 5};
    vector<int> v3(5, 100); 
    vector<int> v4 = v2; // Copying

    printVector("Standard Vector", v);
    printVector("Initialized Vector", v2);
    
    cout << "-----------------------------------" << endl;

    // 2. 2D Vector (Matrix)
    // In older C++, avoid '>>' and use '> >' (with a space)
    vector<vector<int> > matrix(2, vector<int>(3, 0));

    cout << "2D Matrix (2x3):" << endl;
    for (int i = 0; i < matrix.size(); i++) {
        cout << "  ";
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------" << endl;

    // 3. Vector of Pairs
    vector<pair<int, int> > pairs;
    pairs.push_back({1, 2});
    pairs.push_back({3, 4});
    
    // Using emplace_back (more efficient for pairs)
    pairs.emplace_back(5, 6); 

    cout << "Vector of Pairs: ";
    // Using standard pair access for better compatibility
    for (int i = 0; i < pairs.size(); i++) {
        cout << "{" << pairs[i].first << ", " << pairs[i].second << "} ";
    }
    cout << endl;

    return 0;
}