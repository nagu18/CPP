#include <iostream>
using namespace std;
int add(int a, int b, int c){
    return (a+b+c);
}
int main(){
    int a , b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << add(a , b , c);
}