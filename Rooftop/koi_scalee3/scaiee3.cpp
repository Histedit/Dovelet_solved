#include <iostream>
#include <algorithm>

using std::cin; using std::cout; using std::sort;

int main(){
	
	int N = 0, sum = 0;
	int number[1000];
	cin >> N;
	for(int i=0;i<N;i++) cin >> number[i];
	sort(number, number+N);

	for(int j=0;j<N; j++){
		if(number[j]>sum+1) break;
		else sum+=number[j];
	}
	cout << sum+1;
	return 0;

}