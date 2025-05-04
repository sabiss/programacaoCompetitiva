#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> a;

    int n, q = 1;

    while (n != 0 && q != 0)
    {
        cin >> n, q;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < q; i++)
        {
            int achar;
            cin >> achar;

            int l = 0;
            int r = a.size()-1;
            int res = 0;

            while (r >= l)
            {
                int mid = (l + r) / 2;
                if (a[mid] == achar)
                {
                    res = mid;
                    r = mid - 1;
                }
                else if (achar > a[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            cout << "CASE# " << q << ":" << endl;

            if (res == 0)
            {
                cout << achar << " not found" << endl;
            }
            else
            {
                cout << achar << " found at " << res + 1 << endl;
            }
        }
    }

    return 0;
}