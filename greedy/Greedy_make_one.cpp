#include <bits/stdc++.h>

using namespace std;

int n, k, c;
int main()
{
    cin >> n >> k;

    while(n != 1)
    {
        if(n % k == 0)
        {
            n /= k;
        }
        else
        {
            n -= 1;
        }
        c++;
    }
    printf("%d",c);
}