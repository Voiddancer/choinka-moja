#include <iostream>

using namespace std;
int h;
int main()
{
    cout<< "podaj wysokosc :";
    cin>> h;
    cout<< endl;
    for (int i=1;i<=h;i++)
    {
        for (int s=1;s<=h-i;s++)
        {
            cout << " ";
        }
        for (int g=1;g<=2*i-1;g++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}
