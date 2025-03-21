

#if defined(__GNUC__) && (__GNUC__>=3)
#include <iostream>
using namespace std;
#else
#include <iostream.h>
#endif
#include "VCompany.h"

VCompany::VCompany() : VObject() , name() , country()
{
}

VCompany::VCompany(VCompany& x) : VObject() , name(x.name) , country(x.country)
{
}

VCompany::VCompany(Char_t* nameIn,Char_t* countryIn) : VObject() , name(nameIn) , country(countryIn)
{
}

VCompany::VCompany(Char_t* nameIn,Int_t num) : VObject(), name(nameIn), country()
{
  char buf[10];
  sprintf(buf,"country%d",num);
  country = buf;
}

VCompany& VCompany::operator=(VCompany& x) 
{
  name = x.name;
  country = x.country;
  return x;
}

VCompany::~VCompany() 
{
}

void VCompany::set(Char_t* nameIn,Char_t* countryIn)
{
  name = nameIn;
  country = countryIn;
}

void VCompany::disp() {
  cout << name.String() << " " << country.String() << endl;  
}
