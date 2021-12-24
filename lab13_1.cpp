#include <iostream>
#include <ctime>
using namespace std;

long long int fibonacci( long long int ) ;

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci ( long long int x ){
if(x > 1){
    x = fibonacci(x-1) + fibonacci(x-2) ;
}
return x ;
}