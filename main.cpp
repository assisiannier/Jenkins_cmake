#include"Cal.h"

int main()
{
    Cal<int> tets(3, 5);
    tets.addT();
    if(tets.addT()==7) return 0;
    else {
        std::cout<<"Test error!!!";
        return -1;
    }
    
}