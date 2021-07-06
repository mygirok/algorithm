#include <bits/stdc++.h>

using namespace std;

int n = 1260;
int cnt = 0;
int coin_arrary[4] = {500, 100, 50, 10};

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        cnt += n / coin_arrary[i];
        n %= coin_arrary[i];
    }
    cout << cnt << '\n';
}
