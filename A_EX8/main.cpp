#include <bits/stdc++.h>
using namespace std;

int main() {
    int p,price,N;
    string text;
    cin >> p;

    // �p�^�[��1
    if (p == 1) {
        cin >> price >> N;
    }

    // �p�^�[��2
    if (p == 2) {
        cin >> text >> price >> N;
        cout << text << "!" << endl;
    }
    cout << price * N << endl;

    return 0;
}