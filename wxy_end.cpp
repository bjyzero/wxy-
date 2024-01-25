#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 1;
int a[N];

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int value, ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> value;
        if (value == 2 && a[value] != 0)
            ans = i + a[value];
        a[value] = i;
    }

    for (int j = 2; j < 1000; j = j + 2)
    {
        for (int k = j + 2; k <= 1000; k = k + 2)
        {
            if (a[j] == 0 || a[k] == 0)
                continue;
            if (gcd(j, k) != 2)
                continue;
            ans = max(ans, a[j] + a[k]);
        }
    }
    cout << ans << '\n';
    return 0;
}