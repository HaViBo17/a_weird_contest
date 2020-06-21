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
	bool a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int n ;
	cin >> n ;
	int zero_count= 0;
	forn(i,n){
		int temp;
		cin >> temp;
		if(temp == 0)zero_count++;
	}
	if(n <= 3){
	    int low;
		if(zero_count >= 1)low = 5;
		else low = 0;
		if(e){
		    cout << low << endl;
		    return;
		}
		rep(i,1,4){
			int temp = low + i;
			if(((temp%2 == 0) == a)&&((temp%4 == 0) == b)&&(((temp-1)%2 == 0) == c)&&(((temp-1)%4 == 0) == d)){
				cout << temp << endl ;
				return;
			}
		}
	}
	ld answer = 0;
	ld extro = (ld)n;
	int i = 0;
    while(answer < extro){
        i++;
        answer += log10(i+1);
    }
    cout << i << endl;

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
