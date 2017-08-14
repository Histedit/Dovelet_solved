#include <iostream> 
using std::cin; using std::cout;
int main(){
	int a=0;
	int b=0;
	int i=0;
	int res=0;
	
	cin>>a;
	while(i<5){
		cin>>b;
		if(a==b)res++;i++;
	} 
	cout<<res;
	return 0;
}