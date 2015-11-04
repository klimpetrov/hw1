#include <iostream>
using namespace std;
int main(){
	int N=0;
	cout <<"N"<< endl;
	cin >> N;
	if(N==0){
	cout <<"Fibonacci-Zahl" <<" "<<"ist"<<" "<<0<<endl;
	}
	if(N==1){
	cout <<"Fibonacci-Zahl" <<" "<<"ist"<<" "<<1<<endl;
	}
	if(N>1){
		int x=1;
		int y=0;
		int f;
		for(int i=1;i<N;i++){
			f=x+y;
			y=x;
			x=f;
		}
	cout <<"Fibonacci Zahl" <<" "<<"ist"<<" "<<x<<endl;
	}
return 0;

}	
