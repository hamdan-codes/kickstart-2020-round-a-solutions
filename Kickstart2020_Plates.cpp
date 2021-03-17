/*
 * Author Chaudhary Hamdan
 * C++ Template for Competitive Programming
 * Github link : https://github.com/hamdan-codes
 * */

/*
 * Template available at my Github
 * Repository Link :-
 * https://github.com/hamdan-codes/templates-for-CP/
 * */




#include <bits/stdc++.h>


#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             LONG_LONG_MAX
#define ps(x,y)         fixed<<setprecision(y)<<x
#define endl            '\n'
#define mk(arr,n,type)  type *arr=new type[n]
#define w(x)            int x; cin >> x; while(x--)
#define f(i,x,y)        for(int i = x; i < y; i++)



using namespace std;


void c_p_p()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\KIIT\\input.txt", "r", stdin);
    freopen("C:\\Users\\KIIT\\output.txt", "w", stdout);
#endif
}
/* ********************* Your Functions Below ********************** */

















/* ********************* Your Functions Above ********************** */

int32_t main()
{
    //c_p_p();

    /* *************** Your main function Code Below ****************** */
    int t;
    int i = 1;

    cin >> t;

    while (t--) {

        int n, k, p;

        cin >> n >> k >> p;

        int a[n][k];
        int dp[n + 1][(n * k) + 1];

        memset(dp , 0xc0, sizeof(dp));
        dp[0][0] = 0;

        for (int i = 0; i < n; ++i) {

            memcpy(dp[i + 1] , dp[i], sizeof(dp[0]));

            for (int j = 0, s = 0; j < k; ++j) {

                cin >> a[i][j];
                s = s + a[i][j];

                for (int l = 0; (l + j + 1) <= p; ++l) {

                    dp[i + 1][l + j + 1] = max( dp[i][l] + s, dp[i + 1][l + j + 1]);

                }
            }
        }

        cout << "Case #" << i << ": " << dp[n][p] << endl;

        i++;
    }



















    /* **************** Your main function Code Above ****************** */

    return 0;
}
