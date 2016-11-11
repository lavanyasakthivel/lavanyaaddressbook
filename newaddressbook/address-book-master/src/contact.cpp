#include "contact.h"

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    */
    std::string str1,str2,str3,str4,str5,str6,str7,str8,str9;
    str1='1';str2='2';str3='3';str4='4';str5='5';str6='6';str7='7';str8='8';str9='9';

    bool hasNames = !(firstName.empty() || lastName.empty()||email.empty());


   if(hasNames && !phoneNumber.empty())
    {
        /*for(int i=0;i<10;i++)
        {
       if(phoneNumber.compare(str1)==0||phoneNumber.compare(str2)==0||phoneNumber.compare(str3)==0
               ||phoneNumber.compare(str4)==0||phoneNumber.compare(str5)==0
    ||phoneNumber.compare(str6)==0||phoneNumber.compare(str7)==0||phoneNumber.compare(str8)==0||phoneNumber.compare(str1)==0)
       {
           return true;

       }
       else
       {
           return false;
       }}*/
        if(phoneNumber.length()==10){return true;}
        else{return false;}
       return true;
    }
    else
    {
        return false;
    }
}
 bool Contact::isValidPhone() const
    {
        bool length = (phoneNumber.length()== 10);
        int num = 1;
        if (length)
        {

                for (int i=0;i<10;i++)
                {
                  if (!isdigit(phoneNumber[i]))
                     num=0;
                }
                if(num==1)
                   {
                    return true;
                   }
                else
                {
                    return false;
                }
          }
        else
        {
               return false;
        }
    }
bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() && 
        email.empty()&& city.empty()&& country.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
    
