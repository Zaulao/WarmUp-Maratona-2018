#include <iostream>
#include <stdio.h>
#include <math.h>
#define endl '\n';
using namespace std;

int main() {
    long long m, n, a;
    cin >> n >>  m >> a;

    cout << (((n-1)/a)+1) * (((m-1)/a)+1) << endl;

    return 0;
}