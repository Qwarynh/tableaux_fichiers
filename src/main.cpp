#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
vector <int> tab(3);
tab[0]=3;
tab[1]=4;
tab[2]=5;
tab.push_back(1000);

cout<< tab[0] << " " << tab[1] << " " << tab[2] << " " << tab[3] << endl;
cout << tab.size() << endl;

tab[3]= 101;
tab.erase(tab.begin() +1);
cout << tab.size() << endl;
return 0;
}
