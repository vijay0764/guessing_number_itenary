#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int host , guest;
    cout << "host number between 1-25  ";
    cin >> host ;

    while(host>25)
     {

        cout << " enter again  ";
        cin >> host;
        };

    system("cls");
    cout << "guest guess  ";
    cin >> guest ;
    system("cls");

    (host == guest) ? cout << "good guess"  : cout << "try again" ;


    return 0;
}
