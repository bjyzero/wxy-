#include <bits/stdc++.h>
using namespace std;
//由于数值的范围比数量n的范围更小，故我们开一个以数值为下标的数组
//这种以数值为下标的解法就是桶运算
const int N = 1e3 + 1;
int a[N];

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int value, ans = 0;

    //注意：可能存在最大偶数为2的情况，这里对这种情况进行单独处理
    //根据样例知数组下标从1开始
    for (int i = 1; i <= n; ++i)
    {
        cin >> value;
        if (value == 2 && a[value] != 0)
            ans = i + a[value];
        a[value] = i;
    }

    //因为最大公约数为2，我们知数值都为偶数，可采取每次+2来减少时间
    //因此下标j数值也从2开始
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
