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
	ll c , p;
	cin >> c >> p;
	ll distance = 0 ;
	if(c <= 2){
	    cout << min(p,c) << endl;
	    return;
	}
	while(p > c){
		ll temp = p/c;
		if(p%c == 0)temp--;
		ll mileage = 2*temp + 1 ;
		ll short_pet = p - temp*c ;
		if(short_pet % mileage == 0){
			distance += short_pet / mileage;
			p -= short_pet;
		}else{
			distance += (ll)(short_pet / mileage);
			p -= distance * mileage;
			distance++;
			p = max(p - mileage , temp*c - (2 * (temp -1) + 1));
		}
	}
	cout << distance + p << endl;
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
