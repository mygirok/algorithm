#include <bits/stdc++.h>

using namespace std;

int r, c;
int main()
{
    cin >> r >> c;

    int min = 0;
    int max = 0;
    int arr[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            
            if(j == 0)
            {
                min = arr[i][0];
            }
            else
            {
                if(arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }
        }
        if(max < min)
        {
            max = min;
        }
    }
    
    printf("%d",max);
}