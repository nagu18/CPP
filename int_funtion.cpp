#include <iostream>
using namespace std;
int add(int x, int y, int z){          
    return x+y+z;                      //function should be outside of the int main(){}
}
int main(){
     int x,y,z;
     cin >> x;
     cin >> y;
     cin >> z;
     cout << add(x,y,z);
    //int re = add(x,y,z);  //-- function 
    //cout << re;
}