#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    bool flag = false;

   for (int i = 2; i < n; i++)
   {
     if (n%i==0)
     {
        cout<<"Not a prime number!!";
        flag = true;
        break;
     }
     
   }

   if (flag==false)
   {
    cout<<"Prime number!!";
   }
   
   
return 0;
}