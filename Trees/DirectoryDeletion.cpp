/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here


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

vi toDelete(100005, 0);
vi parent[100005];
int ans;

void dfs(int id) {
    if (toDelete[id]) {
        ans ++;
        return;
    }
    for (int i = 0; i < (int)parent[id].size(); i++) {
        dfs(parent[id][i]);
    }
}

int main() {

    fastio
    int n, a;
    cin >> n;

    
    for (int i = 1; i < n+1; i++) {
        cin >> a;
        parent[a].PB(i);
    }
    int m; cin >> m;
    
    for (int i = 0; i < m; i++) {
        cin >> a;
        toDelete[a] = 1;
    }
    dfs(1);
    cout << ans;



    

}


