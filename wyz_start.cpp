//这种写法是比较简单容易想出来的一种暴力解法
//但是，我们注意看题目n的范围为[1,10^5]
//这里我们使用双重for循环，时间复杂度为O(n^2)
//计算机1s大概可以跑2*10^8个样例,按照n的取值范围最坏情况跑10^10个，故这种写法不能通过测试
//这里建议看第二个代码案例，本案例仅供比较
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int ans = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (gcd(a[i], a[j]) == 2)
            {
                ans = max(ans, i + j + 2);
            }
        }
    }

    cout << ans << '\n';

    return 0;
}