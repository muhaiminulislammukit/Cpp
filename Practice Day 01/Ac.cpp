#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N < 0)
    {
        return 0;
    }

    int *A = new int[N];
    for (int index = 0; index < N; index++)
    {
        cin >> A[index];
    }

    int M;
    cin >> M;
    if (M < N)
    {
        delete[] A;
        return 0;
    }

    int *B = new int[M];
    for (int index = 0; index < N; index++)
    {
        B[index] = A[index];
    }

    delete[] A;

    for (int index = N; index < M; index++)
    {
        cin >> B[index];
    }

    for (int index = 0; index < M; index++)
    {
        if (index > 0)
        {
            cout << ' ';
        }
        cout << B[index];
    }
    cout << '\n';

    delete[] B;
    return 0;
}
