#include <iostream>

using namespace std;

int main()
{
    const u_char chr[8] = "tesu123";
    const u_char* p = chr;
    cout<<"p: "<<*(p-1);
    if(*(p-2)=='t')
    {
        cout<<"IN: IF"<<endl;
        
    }
    cout<<"OUT: IF"<<endl;
    return 0;
}
