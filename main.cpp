#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int sum_up(long long int val) {

    // write your lines of code below
    // graders will manually grade this part
    // you can have some flexibility regarding the format,
    // as long as the code is correct.
    // please add comments to explain your logic
    // partial credits will be given
    //////////////////////////////////////////////

    if(val < 0) return -1;
    else if(val < 10) return val;
    else{
        return val%10 + sum_up(val/10);
    }

    ///////////////////////////////
}
int main(){

    cout << sum_up(123321999911111111);
}