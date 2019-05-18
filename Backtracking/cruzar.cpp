#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
long long costo=0LL;
int turno=0;

int tablero[999+1][999+1];

int impI[] = { 0, 1, 0, -1 };
int impJ[] = { 1, 0, -1, 0 };

int r, c;

vector<int> costos;

long long iterations=0;

void recorrido(int i, int j)
{	
	int backtrack = tablero[i][j];
	costo+=tablero[i][j];

	tablero[i][j] = -1;

	for (int k=0;k<4;++k) {
		r = i+impI[k];
		c = j+impJ[k];

		if ( c < 0 || r == n || r < 0 || c == m)
			continue;

		if ( tablero[r][c] != -1) 
			recorrido(r, c);
	}
	if ( i==n-1 && j==m-1) {
		costos.push_back( costo );
	}

	costo -= backtrack;
	tablero[i][j] = backtrack;
}

int main()
{
	scanf("%d",&n);
	scanf("%d",&m);

	for (int i=0;i<n;++i)
	{
		for (int j=0;j<m;++j)
		{
			scanf("%d",&tablero[i][j]);
		}
	}

	recorrido(0,0);

	sort(costos.begin(), costos.end());

	printf("%d\n",costos[0]);

	return 0;
}