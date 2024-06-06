#include <iostream>
using namespace std;
int main ()
{
    int N;
    cout<<"Hastas que numero desea llegar: ";
    cin>>N;
    for (int i = 0; i <= N; i+=5)
	{
        cout<<i<<"\n";
    }
    return 0;
}