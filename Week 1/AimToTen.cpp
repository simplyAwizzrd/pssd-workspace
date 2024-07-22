#include <iostream>
#include <vector>

using namespace std;

class AimToTen {
public:
    static int need(vector<int>& marks) {
        double sum = 0;
        int count = 0;

        for (auto itr : marks) {
            sum += itr;
        }

        double mean = sum / static_cast<double>(marks.size());
        while (mean < 9.5) {
            marks.push_back(10);
            count++;
            sum += 10;
            mean = sum / static_cast<double>(marks.size());
        }
        return count;
    }
};

int main() {
    vector<int> vec1 = {9, 10, 10, 9};
    vector<int> vec2 = {8, 9};
    vector<int> vec3 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> vec4 = {10, 10, 10, 10};

    cout << "Minimum 10s needed for vec1: " << AimToTen::need(vec1) << endl;
    cout << "Minimum 10s needed for vec2: " << AimToTen::need(vec2) << endl;
    cout << "Minimum 10s needed for vec3: " << AimToTen::need(vec3) << endl;
    cout << "Minimum 10s needed for vec4: " << AimToTen::need(vec4) << endl;

    return 0;
}