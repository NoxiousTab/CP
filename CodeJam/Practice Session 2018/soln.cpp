#include <stdio.h>
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <map>
#include <numeric>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
#include <algorithm>
#define loop(i, a, b) for(int i=int(a); i<= int(b); i++) // loop variable i from a to b
#define ll long long
using namespace std;
//typedef vector<int, int>			vii;
void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
  
    int t = 1;
    /*is Single Test case?*/ cin >> t;
    int cas=1;
    while (t--) {
    	cout << "Case #"<<cas<<": ";
        solve();
        cas++;
        
    }
  
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}

void solve(){

	int d; int n;
	cin>>d>>n;
	
	double totalTime = 0.0; double tt;

	for(int i=0;i<n;i++){
		int K; int S;
		cin>>K>>S;
		tt = (double)(d-K)/(double)S;
		if(tt > totalTime){
			totalTime = tt;
		}
	}

	cout<<(double)d/(double)totalTime<<endl;

}
