

/*
    :::::    NEVER GIVE UP!!!    :::::
    ::::                          ::::
    :::    nneell / b_neelkamal    :::
    ::::--------------------------::::
    :::::   NEELKAMAL  BHARATI   :::::
    ::::::----------------------::::::
    ::::::::    VIIT, PUNE    ::::::::
 */

//https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/practice-problems/algorithm/mirror-image-2/description/

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
    int i1, i2;

    

    cin >> n >> q;
    vi map(10000, -1), tree(10000, -1), mmap(10000, -1), mtree(10000, -1);
    map[1] = 1;
    mmap[1] = 1;
    tree[1] = 1;
    mtree[1] = 1;
    
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b >> c;
        if (c == 'R') {
            i1 = map[a]*2 + 1;
            i2 = mmap[a]*2;
            
        }
        else {
            i1 = map[a]*2;
            i2 = mmap[a]*2 + 1;
        }

        map[b] = i1;
        mmap[b] = i2;
        tree[i1] = b;
        mtree[i2] = b;
        
        
    }
    
    //for (int i = 0; i < n+5; i++) cout << tree[i]; cout <<endl;
    //for (int i = 0; i < n+5; i++) cout << mtree[i]; cout <<endl;
    

    for (int i = 0; i < q; i++) {
        cin >> a;
        cout << mtree[map[a]] << '\n';
    }

    

}


