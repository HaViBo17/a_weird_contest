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
int pika(int a){
	if(a == 0)return 0;
	if(a == 1)return 0;//important
	if(a == 2)return 1;
	if(a == 3)return 4;
	if(a == 4)return 18;
	if(a == 5)return 96;
	if(a == 6)return 600;
	if(a == 7)return 4320;
	if(a == 8)return 35280;
	if(a == 9)return 322560;
	return 0;
}
void solve(){
	int n ;
	cin >> n ;
	int answer = 0;
	while(n){
		answer += pika(n%10);
		n /= 10;
	}
	cout << answer << endl;
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
