#include <iostream> 
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1;
    while(a<20)
    {
        a++;
        if(a == 15) continue;
        cout<<a<<endl;
    }
    return 0;
}
