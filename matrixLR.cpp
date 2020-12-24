#include <bits/stdc++.h>

using namespace std;

signed main(){
  srand(time(NULL));
  int n, m;
	cout << "Print n(row) and m(columns) values: ";
	cin >> n >> m;
	int a[n + 1][m + 1];
	for(int i = 1;i <= n;++i){
		for(int j = 1;j <= m;++j){
			a[i][j] = rand() % 10000;
		}
	}
	cout << "By left side:"<<"\n";
	for(int i = 1;i <= n;++i){
		for(int j = 1;j <= m;++j){
			cout << a[i][j] << string(5 - log10(a[i][j]), ' ') << " ";
		}
		cout << "\n";
	}
	cout << "By right side:" << "\n";
	for(int i = 1;i <= n;++i){
		for(int j = 1;j <= m;++j){
			cout << setw(5) << a[i][j] << " ";
		}
		cout << "\n";
	}
}
