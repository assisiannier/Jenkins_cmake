#include"Cal.h"

int main()
{
    Cal<int> tets(2, 5);
    tets.addT();
    if(tets.addT()==7) return 0;
    else return -1;
}