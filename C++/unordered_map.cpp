#include <iostream>
#include<unordered_map>
using namespace std;
int main(){
	unordered_map <string,string> mymap;
	mymap["Australia"] = "Canberra";
	mymap["US"] = "Washington";
	mymap["Japan"] = "Tokyo";
	for(auto it = mymap.begin(); it != mymap.end(); it++){
		cout << it->first << ':' << it->second <<endl;
	}
	for ( unsigned i = 0; i < mymap.bucket_count(); ++i) {
    		std::cout << "bucket #" << i << " contains:";
    		for ( auto local_it = mymap.begin(i); local_it!= mymap.end(i); ++local_it )
      			std::cout << " " << local_it->first << ":" << local_it->second;
 	   	std::cout << std::endl;
 	 }
	//cout<<mymap["Australia"];
}
