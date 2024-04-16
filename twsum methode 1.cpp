/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    int size;
    cin >> size;
    int target;
    cin >> target;
    for(int i = 0; i < size; ++i) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    for(int i = 0; i < v.size(); ++i) {
        for(int j = i + 1; j < v.size(); ++j) {
            if (v[i] + v[j] == target) {
                cout << i << " " << j;
            }
        }
    }
    return 0;
}
