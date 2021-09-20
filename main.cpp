//By Humoyun developer 17.09.2021 fifagor teoremasi bo'yicha uchburchak yuzini topish
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
//    int k,l;
//    cin>>k;
//    cout<<1176/k <<endl;
//    cin>>l;
//    cout<<1176/l <<endl;
    int a,b,c,d,P,S;
//    a=3;
//    b=4;
    cout << "a ni kiriting" <<endl;
    cin>>a; // uchburchak kateti
    cout << "a="<< a << endl;
    cout << "b ni kiriting" <<endl;
    cin>>b;uchburchak kateti
    cout << "b="<< b << endl;
    S=a*b/2;
//    cout<< d << endl;
    cout << "S=" << S << endl;
    c=a*a+b*b;
    d=sqrt(c); // gipotenuzani topish
    P=a+b+c; // perimetrni topish
    cout << "P=" << P << endl;
    return 0;

}
