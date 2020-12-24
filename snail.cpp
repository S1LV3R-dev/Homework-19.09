#include<bits/stdc++.h>

using namespace std;

int n, m;
int mas[1000][1000];

void Input(){
	cout << "Print n(rows) and m(columns) values:";
  cin >> n >> m;
}

void Solve(int a, int b){
  int N = a, M = b;
	int x, y;
	int cur = 1;
	x = y = 0;
	while(x < N && y < M){
		/// Right corner
		for(int i = y;i <= M - 1;++i) mas[x][i] = cur++;
		x++;
		for(int i = x;i <= N - 1;++i) mas[i][M - 1] = cur++;
		M--;
    if (cur <= n * m){
      /// Left corner
      for(int i = M - 1;i >= y;--i) mas[N - 1][i] = cur++;
      N--;
      for(int i = N - 1;i >= x;--i) mas[i][y] = cur++;
      y++;
    }
	}
}

void Output(){
  int w = n * m;
	w = log10(w) + 2;
	int z = log10(n*m)+1;
	for(int i = 0;i < n;++i){
		for(int j = 0;j < m;++j)
		if (mas[i][j] >=10)
      		cout << setw(w) << mas[i][j];
		else
      		cout << setw(z) << 0 << mas[i][j];
		cout << "\n";
	}
}

int main()
{
  Input();
  Solve(n, m);
  Output();
  return 0;
}
