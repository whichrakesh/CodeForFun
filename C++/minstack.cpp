#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
    
    int n;
    cin >> n ;
    string s;
    stack<int> St1, St2;
    for (int i = 0; i< n; i++){
        cin >> s;
        
        if (s=="P"){
            //cout<<"P";
            St1.pop();
            St2.pop();
        } else {
            int num = atoi(s.c_str());
            St1.push(num);
            if(St2.empty() || num < St2.top() ) {
                St2.push(num);
            } else {
                St2.push(St2.top());
            }
        }
        cout << St2. top();
    }
}
            
        
        
    
