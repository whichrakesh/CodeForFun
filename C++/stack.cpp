#include<iostream>
#include<stack>
/*	Permitted operations:
	empty,size,top,push,pop
*/
using namespace std;
int main(){
	int n;
	stack<int> s;
	for(int i = 0; i<10; i++){
		cin>>n;
		s.push(n);
	}
	for(int i = 0; i<10; i++){
		n = s.top();
		s.pop();
		cout<<n;
	}
}