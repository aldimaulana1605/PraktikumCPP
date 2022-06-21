//melihat efek for tersarang
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int  a,b;
    for (a=1; a<5; a++)
   {
      for (b=1; b<3; b++)
     cout<<setw(5)<<a<setw(3)<<b;
     cout<<endl;
} return 0;
}
