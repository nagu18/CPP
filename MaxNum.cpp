#include <iostream>
using namespace std;
int MaxNum(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }
    else if(b >= a && b >= c){
        return b;
    }
    else {
        return c;
    }
}
int main (){
    int a,b,c;
    cin >> a >> b >> c;
    cout << MaxNum(a,b,c);
}