#include <iostream>

using namespace std;

int main()
{
    int x;
    for(int i=1;i <= 100; i++){
        x =i;
        if (++x%2 == 0)
            if (++x%3 == 0)
                if (++x%7 == 0)
                    cout << x << ',';
}
cout << endl;
}