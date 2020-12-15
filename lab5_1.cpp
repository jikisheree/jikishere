#include<iostream>
using namespace std;

int main(){
	
	int x = 1;
    int i = 0;
    int p = 0;
    
    while(x != 0){
    	cout << "Enter an integer: ";
    	cin >> x;
        if(x != 0){
			if(x%2 == 0){
            i++;
        }else{
            p++;
        }
    }
	}
        cout << "#Even numbers = " << i << "\n";
        cout << "#Odd numbers = " << p;
    
	return 0;
}