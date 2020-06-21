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
#define forn(i,n) for(ll i = 0 ; i < (ll)n ; i++)
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
	ll n , e ;
	cin >> n >> e ;
	vll data(n);

	ll sum = 0;
	ll minx = 10e18+1;
	forn(i,n){
		cin >> data[i];
		sum+= data[i];
		e += data[i];
		if(e <= 0){
			cout << i +1 << endl;
			return;
		}
		minx = min(minx,sum);
	}
	if(sum >= 0){
		cout << -1 << endl;
		return;
	}else sum *= -1;
	ll moves = n;
	ll temp = e + minx;
	ll x ;
	if(temp < 0){
		forn(i,n){
			e += data[i];
			moves++;
			if(e <=0){
				cout << moves << endl;
				return;
			}
		}
	}
	if(temp % sum == 0){
		x= temp/sum;
		moves += x*n;
		e -= sum*x;
		forn(i,n){
			e += data[i];
			moves++;
			if(e <=0){
				cout << moves << endl;
				return;
			}
		}
	}else{
		x = temp/sum;
		moves += x*n;
		e -= sum*x;
		forn(i,2*n){
			e += data[i%n];
			moves++;
			if(e <=0){
				cout << moves << endl;
				return;
			}
		}
	}
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
