#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
int rnd(int lower, int upper)
{
    return (rand() % (upper - lower + 1) + lower);
}
int32_t main()
{
    fastio;
    srand(time(NULL));
    int tc; //Total number of test cases
    cin >> tc;
    for (int tcn = 0; tcn < tc; tcn++) //tcn defines the test case number
    {
        ofstream geout("./input/input" + to_string(tcn) + ".txt", std::ios_base::app | std::ios_base::out);
        int t;
        t = rnd(1, 100);    // Number of test cases in the input file(internal test cases)
        geout << t << endl; // Adding it to the input file
        for (int i = 0; i < t; i++)
        {
            /* Add Logic to randomly generate input */
        }
    }
    return 0;
}
