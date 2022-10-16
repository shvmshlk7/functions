#include <iostream>
using namespace std;

int myfunction(int x,int y){
	return x + y;
}

int main(){
	int z = myfunction(100000 , 5645305);
    cout << z;
    return 0;
}
	
