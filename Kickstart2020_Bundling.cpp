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






int n, k, c[2000001][26], m, cnt[2000001];
int ans;

void dfs(int u = 0, int d = 0) {
	for (int v = 0; v < 26; ++v)
		if ( c[u][v] )
			dfs( c[u][v], d + 1), cnt[u] += cnt[ c[u][v] ];
	while (cnt[u] >= k) {
		cnt[u] = cnt[u] - k;
		ans = ans + d;
	}
}

void solve() {
	cin >> n >> k;
	m = 1;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		int u = 0;
		for (char d : s) {
			if (!c[u][d - 'A'])
				c[u][d - 'A'] = m++;
			u = c[u][d - 'A'];
		}
		++cnt[u];
	}
	ans = 0;
	dfs();
	cout << ans << endl;
	memset(c, 0, m * sizeof(c[0]));
	memset(cnt, 0, m * 4);
}












/* ********************* Your Functions Above ********************** */

int32_t main()
{
	//c_p_p();

	/* *************** Your main function Code Below ****************** */


	int t, i = 1;
	cin >> t;
	while (t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
















	/* **************** Your main function Code Above ****************** */

	return 0;
}
