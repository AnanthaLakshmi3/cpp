#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    int k=x*y;
	    int p=x+z ;
	    int work=min(k,p);
	    cout << work << endl;
	}

}
