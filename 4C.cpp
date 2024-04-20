//Codeforces : Registration system

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	map <string, int> x;
	
	while(t--) {
		string a;
		cin >> a;
		
		if(x.count(a) == 0) {
			cout << "OK" << endl;
			x[a] = 1;
	
		}
		else {
			
			cout << a << x[a] << endl;
			++x[a];
		}
	}
	return 0;
}
