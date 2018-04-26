#ifndef IEDITABLE_HPP
#define IEDITABLE_HPP
#include <iostream>
namespace nsUtil{


class Editable
{
protected:
    virtual std::ostream & display(std::ostream &) const =0 ;
public:
    virtual ~Editable (void) {}
    friend std::ostream & operator << (std::ostream & os, const Editable & Obj);
};//Editable
std::ostream & operator << (std::ostream & os, const Editable & editable)
{
    return editable.display(os);


} // operator <<()
}

#endif // IEDITABLE_HPP
