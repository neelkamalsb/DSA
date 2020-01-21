

/*
    :::::    NEVER GIVE UP!!!    :::::
    ::::                          ::::
    :::    nneell / b_neelkamal    :::
    ::::--------------------------::::
    :::::   NEELKAMAL  BHARATI   :::::
    ::::::----------------------::::::
    ::::::::    VIIT, PUNE    ::::::::
 */



#include<bits/stdc++.h>
#define llint long long int
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define vi vector <llint>
#define vll vector <llint>
#define vii vector<pair<int, int> >
#define vpll vector<pair<llint, llint> >
#define all(v) v.begin(),v.end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define MOD 1000000007
using namespace std;
#define sqrt(x) sqrtl(x)
#define float double
llint power(int X, int Y){
    llint ret = 1;
    llint x = X;
    llint y = Y;
    while (y) {
        if (y&1){
            ret = ret*x;
            y--;
        }
        else {
            x = x*x;
            y/=2;
        }
    }
    return ret;
}

int main() {

    fastio
    int n, c;
    cin >> n >> c;
    vi arr(100005, 0), colors(100005, 0), ans(100005, -1);

    for (int i = 2; i < n+1; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n+1; i++) {
        cin >> colors[i];
    }

    for (int i = 2; i < n; i++) {
        int anc = arr[i];
        //int f = 0;
        while (colors[anc]!=colors[i]) {
            anc = arr[anc];
            if (anc == 0) {
                break;
            }
        }
        if (colors[anc] == colors[i]) {
            ans[i] = anc;
        }
    }

    for (int i = 1; i < n+1; i++) {
        cout << ans[i] << ' ';
    }


}

/*
3 1
aba
1 2
1 3
1 a
*/
