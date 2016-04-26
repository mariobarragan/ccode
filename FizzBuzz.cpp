#include <iostream>
using namespace std;

int main(){
	int number;
	for (number = 1; number < 101; number++){
		cout<<"\t";
				if (number % 5 == 0 & number % 3 == 0){
		cout<<"FizzBuzz"<<endl;
		}
		else if (number % 3 == 0){
			cout<<"Fizz"<<endl;
		}
		else if(number % 5 == 0){
			cout<<"Buzz"<<endl;
		}
		else if (number % 5 == 0 & number % 3 == 0){
		cout<<"FizzBuzz"<<endl;
		}
		else{
		cout<<number<<endl;
		}
	}

return 0;
}
