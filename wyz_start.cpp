//����д���ǱȽϼ������������һ�ֱ����ⷨ
//���ǣ�����ע�⿴��Ŀn�ķ�ΧΪ[1,10^5]
//��������ʹ��˫��forѭ����ʱ�临�Ӷ�ΪO(n^2)
//�����1s��ſ�����2*10^8������,����n��ȡֵ��Χ������10^10����������д������ͨ������
//���ｨ�鿴�ڶ������밸���������������Ƚ�
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