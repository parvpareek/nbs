#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>

using namespace std;

int cube(int n) {
    return n * n * n;
}

int main() {
    unordered_map<int, vector<pair<int, int>>> cubeSums;
    int limit;

    cout << "Enter the limit: ";
    limit = 10000;
    // Iterate over pairs of numbers and compute their cube sums
    for (int x = 1; x <= limit; x++) {
        for (int y = x; y <= limit; y++) {
            int sum = cube(x) + cube(y);

            // Store the sum in the map with the corresponding pairs
            if (cubeSums.find(sum) != cubeSums.end()) {
                cubeSums[sum].push_back({x, y});
            } else {
                cubeSums[sum] = {{x, y}};
            }
        }
    }

    // Print out the numbers that can be expressed as the sum of cubes in two different ways
    for (const auto& entry : cubeSums) {
        if (entry.second.size() > 1) {
            cout << entry.first << " can be expressed as:" << endl;
            for (const auto& pair : entry.second) {
                cout << pair.first << "^3 + " << pair.second << "^3" << endl;
            }
            cout << endl;
        }
    }

    return 0;
}
