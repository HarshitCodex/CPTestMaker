#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007

// Add any helper functions you need below
/* 
    HELPER FUNCTIONS
*/

const int MAX = 30005;
int32_t main()
{
    fastio;
    int tc; //Total number of test cases
    cin >> tc;
    for (int tcn = 0; tcn < tc; tcn++) //tcn defines the test case number
    {
        ifstream myfile("./input/input" + to_string(tcn) + ".txt", ios::in);
        ofstream geout("./output/output" + to_string(tcn) + ".txt", std::ios_base::app | std::ios_base::out);
        int t; //number of test cases per input file(need to be part of the input file)
        myfile >> t;
        for (int ti = 0; ti < t; ti++)
        {
            /* Output Code Logic

            -> to take input use :
                myfile >> variable;
            -> to put output use:
                geout << variable;

            */
        }
    }
    return 0;
}