#include "IEditable.hpp"
#include "CException.h"
#include "CstCodErr.h"
#include <iostream>
using namespace std;
using namespace nsUtil;
namespace {
void contenu (const Editable & ed) { cout << ed << endl; }
class CA : public Editable
{
protected:
    virtual ostream &display(ostream&os){ return os<<"Classe A\n";}
public:
    virtual ~CA(void){}


};
class CB : public Editable
{
protected:
    virtual ostream &display(ostream&os){ return os<<"Classe B\n";}
public :
    virtual ~CB(void){}
};

void testClasseEditable(void)
{
    CA A;
    CB B;
    contenu(A);
    contenu(B);

}
}
