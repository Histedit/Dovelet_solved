#include <iostream>
using namespace std;

void swap(int* a, int* b){int temp;temp = *a;*a = *b;*b = temp;}

int main(){
	int in1, in2;
	int num[21];
	int l=1;
	int res;
	for(int i = 1 ; i<21; i++)num[i]=i;
	for(int j=0; j<10; j++){
		cin>>in1>>in2;
		res = (in2-in1)%2;
		l=1;
			for(int k = (in1+in2)/2; k+l<=in2;l++){
				swap(num[k-l+res],num[k+l]);
			}
		}
	for(int p =1;p<21;p++)cout<<num[p]<<" ";
}
