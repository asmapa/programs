#include <iostream>

using namespace std;
class stack
{
    public:int stk[10];
           int top=-1;
           void push(int inf)
  {
    top++;
   
    stk[top]=inf;
    cout<<"elemnt"<<stk[top];
  }
           int pop()
             {
                int r;
                r=stk[top];
                top=top-1;
                cout<<r<<"deleted"<<endl;
                return(r);
             }
 };
