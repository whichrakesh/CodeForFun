#include<iostream>
#include<list>
/* permitted operations
	push_back,pop_back, push_front, pop_front, empty, size, insert, erase, swap, resize, clear
*/
using namespace std;
int main(){
	int n;
	list<int> l;
	for(int i = 0; i<5; i++){
		cin>>n;
		l.push_front(n);
	}
	for(list<int>::iterator i = l.begin() ; i != l.end(); i++){
		cout<< *i <<' ';
	}
}