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
	int k;
	cin>>k;
	int D[k];
	for(int i=0;i<k;i++){
		cin>>D[i];
	}

	sort(D, D+k);

	int minErr = 0;
	int actdist = 0;
	int totalingreds = k;

	int index = 0;

	if(k % 2 != 0){
		totalingreds--;
	}
	for(index = 0; index < totalingreds; index+=2){
		minErr = minErr + ((D[index]-actdist)*(D[index]-actdist))+((D[index+1]-actdist)*(D[index+1]-actdist));
		actdist++;
	}

	if(k % 2 != 0){
		minErr = minErr + (D[index] - actdist)*(D[index] - actdist);
	}

	cout<<minErr<<endl;


}
