#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int pre[n];
    pre[0] = ar[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + ar[i];
    }

    reverse(pre, pre + n);

    for (int i = 0; i < n; i++) {
        cout << pre[i] << " ";
    }

    cout << endl;

    return 0;
}
