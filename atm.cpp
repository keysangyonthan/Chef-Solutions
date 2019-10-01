#include <iostream>
using namespace std;

int main() {
	int withdraw;
	float total_balance;
	cin>>withdraw>>total_balance;
	if (total_balance>(withdraw+0.50) && withdraw % 5 == 0){
	    total_balance=total_balance-withdraw;
	    total_balance-=0.50;
	    cout<<total_balance;
	}
	else{
        cout<<total_balance;
	}
	return 0;
}


