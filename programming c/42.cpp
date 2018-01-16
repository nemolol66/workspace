#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

#define repl(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep(i,n) repl(i,0,n)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define mmax(x,y) (x>y?x:y)
#define mmin(x,y) (x<y?x:y)
#define maxch(x,y) x=mmax(x,y)
#define minch(x,y) x=mmin(x,y)

ll n;
ll m[101][101];

int main(){
  cin >> n;
  rep(i, n){
    ll k;
    cin >> k;
    cin >> k;
    rep(j, k){
      ll v;
      cin >> v;
      v--;
      m[i][v] = 1;
    }
  }
  rep(i,n){
    cout << m[i][0];
    repl(j, 1, n) cout << " " << m[i][j];
    cout << endl;
  }
	return 0;
}