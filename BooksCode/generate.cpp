#include <iostream>
#include <cstdio>
//#include <string>
#include <algorithm>
//#include <string>
#include <cstdlib>
#include <ctime>
#include <climits>

#define m 200
#define n 1000
#define MAX_AI 1245

#define k 1

using namespace std;

int main()
{
	//printf("const char *fibos[] = {");

// 65-90
	srand (time(NULL));

	printf("%d\n",n);

	for (int i = 0; i < n; ++i )
	{
		int I = (rand() % m)-100;
		cout << I << ' ';
	}
	cout << '\n';
	/*
	printf("%d %d\n",n,m);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int ai = (rand() % MAX_AI);
			printf("%d ",ai);		
		}printf("\n");
	}

	printf("%d\n",k);

	printf("V\n");

	/*
	srand (time(NULL));

	printf("%d\n",n);

	for(int i = 0; i < n; ++i)
	{
		int ai = (rand() % MAX_AI);

		printf("%d ",ai);
	}

	printf("\n");
	for(int i = 0; i < n; ++i)
	{
		int ai = (rand() % MAX_AI);

		printf("%d ",ai);
	}

	printf("\n");
	for(int i = 0; i < n; ++i)
	{
		int ai = (rand() % MAX_AI);

		printf("%d ",ai);
	}
	printf("\n");
	*/

}