#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n, weight, sum = 0;
	int i ;
	vector <int>cow_weight;
	scanf("%d", &n);
	
	while( n-- )
	{
		scanf("%d", &weight);
		cow_weight.push_back(weight);
	}

	sort(cow_weight.begin(), cow_weight.end());
	for(i = 0 ; i < 5 ; i++ )
	{
		sum += cow_weight.back();
		cow_weight.pop_back();
	}
	
	printf("%d\n", sum);
	return 0;
}