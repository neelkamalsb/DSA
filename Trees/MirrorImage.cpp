

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
    int n, q, a, b;
    char c;

    

    cin >> n >> q;
    vi map(2*n+1), tree(2*n+1), mmap(2*n+1), mtree(2*n+1);
    
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b >> c;
        if (c == 'R') {
            
        }
    }

    

}


