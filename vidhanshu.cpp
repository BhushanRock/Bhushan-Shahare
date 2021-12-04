include <iostream>
using namespace std;
int main()
{
    int a;
    //only for three digits numbers
    cout<<"\nenter three digit number: ";
    cin>>a;//user a madhi enter karan
    //a=456
    int c,d,e;
    c=a%10;//c=6
    a=a/10;//a=45
    d=a%10;//d=5
    a=a/10;//a=4
    e=a%10;//e=4
    cout<<"\ndigit Sum is: "<<c+d+e<<endl;
    return 0;
}