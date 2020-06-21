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
	string s;
	cin >> s ;
	ll p = s.size();
	ll key = (-1 + sqrt(1+8*p))/2;
	//cout << key << endl;
	ll rem = p - ((key)*(key +1))/2;
	if(rem != 0)key++;
	vector<vector <char> >data(key);
	ll pos = 0;
	for(ll i = 0 ; i < key; i++){
		for(ll j = 0 ; j <= i ; j++){
		    if(pos >= p){
		        data[i].pb('#');
		        continue;
		    }
			data[i].pb(s[pos]);
			pos++;
		}

	}
	for(ll i = 0 ; i < key ; i++){
		for(ll j = i ; j < key ; j++){
			if(data[j][i] != '#')cout << data[j][i];
		}
	}
	cout << flush;
	//cout << endl;
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
