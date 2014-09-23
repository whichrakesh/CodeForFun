#include<iostream>
#include<queue>
/* permitted ops
 empty,size, pop, push, back, front
*/

using namespace std;
int main(){
	int n;
	queue<int> s;
	for(int i = 0; i<5; i++){
		cin>>n;
		s.push(n);
	}
	for(int i = 0; i<5; i++){
		n = s.front();
		s.pop();
		cout<<n<<' ';
	}
}