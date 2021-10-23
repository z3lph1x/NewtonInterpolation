#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<double> x = {-1, 0, 1, 2, 3, 5};
    vector<double> y = {1, 0, 1, 4, 9, 25};
    vector<double> diffL;
    vector<double> diffR;
    int N;
    double P;
    double p;
    double X;
    //P - Polynomial, p - intermediate polynomial//
    diffL.resize(x.size());
    diffR.resize(y.size());
    cout << "Enter the dot of interpolation" << endl;
    cin >> X;
    if(X < x[0] or X > x[x.size()-1]){
        cout << "Extrapolation is not available in this program! Sry." << endl;
        return 0;
    }
    diffL[0] = y[0];
    P = y[0];
    p = 1;
    for (int i = 0; i < x.size() - 1; i++) {
        diffR[i] = y[i + 1];
    }
    for (int i = 1; i < x.size(); i++) {
        diffL[i] = (diffL[i - 1] - diffR[0]) / (x[0] - x[i]);
        p = p * (X - x[i - 1]);
        P += p * diffL[i];
        for (int j = 0; j < x.size() - 1 - i; j++) {
            diffR[j] = (diffR[j] - diffR[j + 1]) / (x[j + 1] - x[j + i + 1]);
        }
    }
    cout << "P(X) = " << P << endl;
    return 0;
}
