#include <iostream>
using namespace std;

float averageSamples(float a, float b) {
    return (a + b) / 2.0f;
}

int main() {
    cout << "Average: " << averageSamples(0.8f, 0.2f) << endl;
    return 0;
}