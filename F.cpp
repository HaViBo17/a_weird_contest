#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<int>
#define vll vector< ll >
#define vull vector< ull >
#define vvi vector< vi >
#define vvll vector < vll >
#define vvull vector < vull >
#define mii map<int,int>
#define pii pair< int , int >
#define repeat(n) for(int ajsS32D_v = 0 ; ajsS32D_v < n ; ajsS32D_v++)
#define forn(i,n) for(int i = 0 ; i < n ; i++)
#define rep(i,a,b) for(int i = a ; i <= b ; i++)
#define rrep(i,a,b) for(int i = a ; i>= b ; i--)
#define debug(x) cerr <<"\n--------------"<< #x << " is " << x << "--------------\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mod (ll)1000000007
#define INF (ll)1
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define INT_MAX (int)2147483647
#define LL_MAX (ll)9223372036854775807
#define ld long double
#define PI (ld)3.1415926535897932384626433832795028

using namespace std ;
void solve(){
	int r, n, e ;
	cin >> r >> n >> e ;
	int rem_runs = max(0,r-6);
	int rem_e = max(0,e-1);
	int min_req_b = (rem_runs + 5)/6;
	if(min_req_b + 1 > n){
		cout << -1 << endl;
		return;
	}
	int min_req_e = min_req_b + 1 + 2* rem_runs;
	if(e < min_req_e){
		cout << -1 << endl;
		return;
	}
	int max_balls = 1 + (rem_e - 2 * rem_runs);
	cout << min(n,max_balls) << endl;
}
int main(){
	FASTIO ;
	bool multi_run = 0;
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	if(multi_run){
		int t ;
		cin >> t;
		while(t--)solve();
	}else{
		solve();
	}

}
