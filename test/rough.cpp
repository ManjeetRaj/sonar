#include <iostream>

using namespace std;
void fun(const u_char *p)
{
    const u_char* chr = p;
    cout<<"p: "<<*(p-1)<<endl;
    if(*(p-2)=='t')
    {
        cout<<"IN: IF"<<endl;
        
    }
    cout<<"OUT: IF"<<endl;
}

int main()
{
    const u_char chr[8] = "tesu123";
    fun(chr);
    cout<<"IN: MAIN"<<endl;
    return 0;
}
