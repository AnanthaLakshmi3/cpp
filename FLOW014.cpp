#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int hard,tensile;
	    float carbon;
	    cin >> hard >> carbon >> tensile;
	    if (hard>50 && carbon < 0.7 && tensile > 5600){
	        cout << 10 << endl;
	    }
	    else if(hard>50 && carbon < 0.7){
	        cout << 9 << endl;
	    }
	    else if (carbon < 0.7 && tensile > 5600){
	        cout << 8 << endl;
	    }
	    else if (hard>50 && tensile >5600){
	        cout <<7 << endl;
	    }
	    else if(hard>50 or carbon < 0.7 or tensile > 5600){
	        cout << 6 << endl;
	    }
	    else{
	        cout << 5 << endl;
	    }
	}

}