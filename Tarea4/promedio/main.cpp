#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int n,i;
    float x[20],sum,prom;
    cout<<"Promedio de una lista de n numeros "<<endl;
    cout<<"n="; cin>>n;
    for(i=1;i<=n;i++){
        cout<<"x["<<i<<"]="; cin>>x[i];
    }
    sum=0;
    for(i=1;i<=n;i++)
        sum=sum+x[i];
        prom=sum/n;
    cout<<"El promedio es: "<<prom<<endl;
    return 0;
}
